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

// Function: entry_0019e358
// Address: 0x19e358 - 0x19e380
void entry_0019e358_0x19e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e358_0x19e358");
#endif

    ctx->pc = 0x19e358u;

    // 0x19e358: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x19e358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x19e35c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E35Cu;
    {
        const bool branch_taken_0x19e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e35c) {
            ctx->pc = 0x19E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E35Cu;
            // 0x19e360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E380u;
            return;
        }
    }
    ctx->pc = 0x19E364u;
    // 0x19e364: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e368: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19e36c: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e36cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e370: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e37c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x19e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19e380u;
}
