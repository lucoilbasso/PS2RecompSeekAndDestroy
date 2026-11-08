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

// Function: entry_00148878
// Address: 0x148878 - 0x1488bc
void entry_00148878_0x148878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148878_0x148878");
#endif

    ctx->pc = 0x148878u;

label_148878:
    // 0x148878: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x148878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14887c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14887cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x148880: 0x25030800  addiu       $v1, $t0, 0x800
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2048));
    // 0x148884: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x148884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x148888: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x148888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x14888c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14888Cu;
    {
        const bool branch_taken_0x14888c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x148890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14888Cu;
        // 0x148890: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14888c) {
            ctx->pc = 0x148878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148878;
        }
    }
    ctx->pc = 0x148894u;
    // 0x148894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x148898: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x148898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14889c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14889Cu;
    {
        const bool branch_taken_0x14889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1488A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14889Cu;
        // 0x1488a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14889c) {
            ctx->pc = 0x148870u;
            return;
        }
    }
    ctx->pc = 0x1488A4u;
    // 0x1488a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1488a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1488ac: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x1488acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x1488b0: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1488b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1488b4: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x1488b4u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1488b8: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x1488b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    ctx->pc = 0x1488bcu;
}
