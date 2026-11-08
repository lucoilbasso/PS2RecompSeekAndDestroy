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

// Function: entry_00160110
// Address: 0x160110 - 0x160168
void entry_00160110_0x160110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160110_0x160110");
#endif

    switch (ctx->pc) {
        case 0x160130u: goto label_160130;
        default: break;
    }

    ctx->pc = 0x160110u;

    // 0x160110: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x160110u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160114: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x160114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160118: 0x8e700fbc  lw          $s0, 0xFBC($s3)
    ctx->pc = 0x160118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x16011c: 0x44926800  mtc1        $s2, $f13
    ctx->pc = 0x16011cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160120: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x160120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x160124: 0x261011c7  addiu       $s0, $s0, 0x11C7
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4551));
    // 0x160128: 0xc067a02  jal         func_19E808
    ctx->pc = 0x160128u;
    SET_GPR_U32(ctx, 31, 0x160130u);
    ctx->pc = 0x16012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160128u;
    // 0x16012c: 0x32107fff  andi        $s0, $s0, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x160128u, 0x160130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160130u;
label_160130:
    // 0x160130: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x160134: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x160134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x160138: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x160138u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16013c: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x160140: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x160140u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x160144: 0x4610025  bgez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x160144u;
    {
        const bool branch_taken_0x160144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x160148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160144u;
        // 0x160148: 0x2405ce39  addiu       $a1, $zero, -0x31C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294954553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160144) {
            ctx->pc = 0x1601DCu;
            return;
        }
    }
    ctx->pc = 0x16014Cu;
    // 0x16014c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x16014cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x160150: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x160150u;
    {
        const bool branch_taken_0x160150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160150) {
            ctx->pc = 0x160154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160150u;
            // 0x160154: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601E0u;
            return;
        }
    }
    ctx->pc = 0x160158u;
    // 0x160158: 0x246331c7  addiu       $v1, $v1, 0x31C7
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12743));
    // 0x16015c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16015Cu;
    {
        const bool branch_taken_0x16015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16015Cu;
        // 0x160160: 0x38942  srl         $s1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16015c) {
            ctx->pc = 0x1601CCu;
            return;
        }
    }
    ctx->pc = 0x160164u;
    // 0x160164: 0x0  nop
    ctx->pc = 0x160164u;
    // NOP
    ctx->pc = 0x160168u;
}
