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

// Function: entry_0014f1f0
// Address: 0x14f1f0 - 0x14f224
void entry_0014f1f0_0x14f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1f0_0x14f1f0");
#endif

    switch (ctx->pc) {
        case 0x14f204u: goto label_14f204;
        default: break;
    }

    ctx->pc = 0x14f1f0u;

    // 0x14f1f0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F1F0u;
    {
        const bool branch_taken_0x14f1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f1f0) {
            ctx->pc = 0x14F1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F1F0u;
            // 0x14f1f4: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F238u;
            return;
        }
    }
    ctx->pc = 0x14F1F8u;
    // 0x14f1f8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f1fc: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F1FCu;
    SET_GPR_U32(ctx, 31, 0x14F204u);
    ctx->pc = 0x14F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1FCu;
    // 0x14f200: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F1FCu, 0x14F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F204u;
label_14f204:
    // 0x14f204: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14f208: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14f20c: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14f20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14f210: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F210u;
    {
        const bool branch_taken_0x14f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f210) {
            ctx->pc = 0x14F214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F210u;
            // 0x14f214: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F224u;
            return;
        }
    }
    ctx->pc = 0x14F218u;
    // 0x14f218: 0x721010c8  pmaxw       $v0, $s0, $s0
    ctx->pc = 0x14f218u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x14f21c: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f220: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->pc = 0x14f224u;
}
