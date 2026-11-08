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

// Function: entry_0018d2e0
// Address: 0x18d2e0 - 0x18d330
void entry_0018d2e0_0x18d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2e0_0x18d2e0");
#endif

    ctx->pc = 0x18d2e0u;

    // 0x18d2e0: 0x14c2002b  bne         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18D2E0u;
    {
        const bool branch_taken_0x18d2e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E0u;
        // 0x18d2e4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e0) {
            ctx->pc = 0x18D390u;
            return;
        }
    }
    ctx->pc = 0x18D2E8u;
    // 0x18d2e8: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x18d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d2ec: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x18d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x18d2f0: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x18d2f4: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x18d2f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2f8: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x18d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x18d2fc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x18d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18d300: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x18d300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x18d304: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18d304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18d308: 0x8e24021c  lw          $a0, 0x21C($s1)
    ctx->pc = 0x18d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18d30c: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x18d30cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18d310: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x18d310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x18d314: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x18d314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18d318: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D318u;
    {
        const bool branch_taken_0x18d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x18D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D318u;
        // 0x18d31c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d318) {
            ctx->pc = 0x18D330u;
            return;
        }
    }
    ctx->pc = 0x18D320u;
    // 0x18d320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d328: 0xc063b70  jal         func_18EDC0
    ctx->pc = 0x18D328u;
    SET_GPR_U32(ctx, 31, 0x18D330u);
    ctx->pc = 0x18D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D328u;
    // 0x18d32c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D328u, 0x18D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D330u;
}
