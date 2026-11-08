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

// Function: caseD_d
// Address: 0x135180 - 0x1351c8
void caseD_d_0x135180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x135180");
#endif

    switch (ctx->pc) {
        case 0x135188u: goto label_135188;
        default: break;
    }

    ctx->pc = 0x135180u;

    // 0x135180: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x135180u;
    SET_GPR_U32(ctx, 31, 0x135188u);
    ctx->pc = 0x135184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135180u;
    // 0x135184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x135180u, 0x135188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135188u;
label_135188:
    // 0x135188: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x135188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13518c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13518cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135190: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x135194: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x135194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135198: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x135198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x13519c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1351a0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x1351a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1351a4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1351a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1351a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1351ac: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1351acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1351b0: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x1351b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1351b4: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x1351b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1351b8: 0x10c70003  beq         $a2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1351B8u;
    {
        const bool branch_taken_0x1351b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1351BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351B8u;
        // 0x1351bc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351b8) {
            ctx->pc = 0x1351C8u;
            return;
        }
    }
    ctx->pc = 0x1351C0u;
    // 0x1351c0: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x1351c0u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x1351c4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1351c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x1351c8u;
}
