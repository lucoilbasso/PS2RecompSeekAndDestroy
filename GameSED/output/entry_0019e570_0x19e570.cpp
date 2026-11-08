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

// Function: entry_0019e570
// Address: 0x19e570 - 0x19e5b8
void entry_0019e570_0x19e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e570_0x19e570");
#endif

    ctx->pc = 0x19e570u;

    // 0x19e570: 0x25270002  addiu       $a3, $t1, 0x2
    ctx->pc = 0x19e570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x19e574: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x19e574u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x19e578: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19e578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e57c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x19e580: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x19e580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19e584: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E584u;
    {
        const bool branch_taken_0x19e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E584u;
        // 0x19e588: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e584) {
            ctx->pc = 0x19E5B8u;
            return;
        }
    }
    ctx->pc = 0x19E58Cu;
    // 0x19e58c: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19e590: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e594: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e594u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e598: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e598u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5a0: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e5a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e5a4: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5ac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e5b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B0u;
        // 0x19e5b4: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E5F0u;
            return;
        }
    }
    ctx->pc = 0x19E5B8u;
}
