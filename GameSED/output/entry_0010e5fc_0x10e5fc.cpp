#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010e5fc
// Address: 0x10e5fc - 0x10e624
void entry_0010e5fc_0x10e5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e5fc_0x10e5fc");
#endif

    ctx->pc = 0x10e5fcu;

    // 0x10e5fc: 0x9622017a  lhu         $v0, 0x17A($s1)
    ctx->pc = 0x10e5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 378)));
    // 0x10e600: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x10e600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10e604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e608: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E608u;
    {
        const bool branch_taken_0x10e608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E608u;
        // 0x10e60c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e608) {
            ctx->pc = 0x10E62Cu;
            return;
        }
    }
    ctx->pc = 0x10E610u;
    // 0x10e610: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x10e610u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x10e614: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x10e614u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10e618: 0xa623017e  sh          $v1, 0x17E($s1)
    ctx->pc = 0x10e618u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e61c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10E61Cu;
    {
        const bool branch_taken_0x10e61c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e61c) {
            ctx->pc = 0x10E620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E61Cu;
            // 0x10e620: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E624u;
            return;
        }
    }
    ctx->pc = 0x10E624u;
}
