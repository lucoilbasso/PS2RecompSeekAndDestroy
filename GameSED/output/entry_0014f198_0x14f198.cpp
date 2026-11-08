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

// Function: entry_0014f198
// Address: 0x14f198 - 0x14f1d4
void entry_0014f198_0x14f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f198_0x14f198");
#endif

    switch (ctx->pc) {
        case 0x14f1b0u: goto label_14f1b0;
        default: break;
    }

    ctx->pc = 0x14f198u;

    // 0x14f198: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f19c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14F19Cu;
    {
        const bool branch_taken_0x14f19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f19c) {
            ctx->pc = 0x14F1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F19Cu;
            // 0x14f1a0: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1F0u;
            return;
        }
    }
    ctx->pc = 0x14F1A4u;
    // 0x14f1a4: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f1a8: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F1A8u;
    SET_GPR_U32(ctx, 31, 0x14F1B0u);
    ctx->pc = 0x14F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1A8u;
    // 0x14f1ac: 0x8e300810  lw          $s0, 0x810($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F1A8u, 0x14F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1B0u;
label_14f1b0:
    // 0x14f1b0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14f1b4: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14f1b8: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14f1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14f1bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F1BCu;
    {
        const bool branch_taken_0x14f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1bc) {
            ctx->pc = 0x14F1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F1BCu;
            // 0x14f1c0: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1D4u;
            return;
        }
    }
    ctx->pc = 0x14F1C4u;
    // 0x14f1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1c8: 0x720210c8  pmaxw       $v0, $s0, $v0
    ctx->pc = 0x14f1c8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x14f1cc: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f1d0: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->pc = 0x14f1d4u;
}
