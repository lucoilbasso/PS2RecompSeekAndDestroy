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

// Function: entry_001d35bc
// Address: 0x1d35bc - 0x1d3618
void entry_001d35bc_0x1d35bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d35bc_0x1d35bc");
#endif

    switch (ctx->pc) {
        case 0x1d35dcu: goto label_1d35dc;
        case 0x1d3614u: goto label_1d3614;
        default: break;
    }

    ctx->pc = 0x1d35bcu;

    // 0x1d35bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D35C0u;
    {
        const bool branch_taken_0x1d35c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d35c0) {
            ctx->pc = 0x1D3618u;
            return;
        }
    }
    ctx->pc = 0x1D35C8u;
    // 0x1d35c8: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1d35c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1d35cc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1d35ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1d35d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35d4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D35D4u;
    SET_GPR_U32(ctx, 31, 0x1D35DCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D35D4u, 0x1D35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35DCu;
label_1d35dc:
    // 0x1d35dc: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D35DCu;
    {
        const bool branch_taken_0x1d35dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35DCu;
        // 0x1d35e0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35dc) {
            ctx->pc = 0x1D3618u;
            return;
        }
    }
    ctx->pc = 0x1D35E4u;
    // 0x1d35e4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D35E4u;
    {
        const bool branch_taken_0x1d35e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35E4u;
        // 0x1d35e8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35e4) {
            ctx->pc = 0x1D3618u;
            return;
        }
    }
    ctx->pc = 0x1D35ECu;
    // 0x1d35ec: 0x188000bc  blez        $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1D35ECu;
    {
        const bool branch_taken_0x1d35ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35ECu;
        // 0x1d35f0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35ec) {
            ctx->pc = 0x1D38E0u;
            return;
        }
    }
    ctx->pc = 0x1D35F4u;
    // 0x1d35f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d35f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d35f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35fc: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d35fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d3600: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d3600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3604: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d3608: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d3608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d360c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D360Cu;
    SET_GPR_U32(ctx, 31, 0x1D3614u);
    ctx->pc = 0x1D3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D360Cu;
    // 0x1d3610: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D360Cu, 0x1D3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3614u;
label_1d3614:
    // 0x1d3614: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3618u;
}
