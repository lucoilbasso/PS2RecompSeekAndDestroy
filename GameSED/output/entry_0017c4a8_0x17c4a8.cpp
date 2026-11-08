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

// Function: entry_0017c4a8
// Address: 0x17c4a8 - 0x17c518
void entry_0017c4a8_0x17c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c4a8_0x17c4a8");
#endif

    switch (ctx->pc) {
        case 0x17c4d0u: goto label_17c4d0;
        case 0x17c504u: goto label_17c504;
        default: break;
    }

    ctx->pc = 0x17c4a8u;

    // 0x17c4a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17c4ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17c4b0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x17C4B0u;
    {
        const bool branch_taken_0x17c4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4B0u;
        // 0x17c4b4: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4b0) {
            ctx->pc = 0x17C518u;
            return;
        }
    }
    ctx->pc = 0x17C4B8u;
    // 0x17c4b8: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x17c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17c4bc: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x17c4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x17c4c0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17c4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4c8: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x17C4C8u;
    SET_GPR_U32(ctx, 31, 0x17C4D0u);
    ctx->pc = 0x17C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4C8u;
    // 0x17c4cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x17C4C8u, 0x17C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4D0u;
label_17c4d0:
    // 0x17c4d0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x17c4d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17c4d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c4dc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17c4e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17c4e4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    // 0x17c4e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17c4ec: 0x28a200a1  slti        $v0, $a1, 0xA1
    ctx->pc = 0x17c4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x17c4f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C4F0u;
    {
        const bool branch_taken_0x17c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4F0u;
        // 0x17c4f4: 0xaf808d18  sw          $zero, -0x72E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4f0) {
            ctx->pc = 0x17C518u;
            return;
        }
    }
    ctx->pc = 0x17C4F8u;
    // 0x17c4f8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x17c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x17c4fc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17C4FCu;
    SET_GPR_U32(ctx, 31, 0x17C504u);
    ctx->pc = 0x17C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4FCu;
    // 0x17c500: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17C4FCu, 0x17C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C504u;
label_17c504:
    // 0x17c504: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17c504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17c508: 0x24a57b50  addiu       $a1, $a1, 0x7B50
    ctx->pc = 0x17c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31568));
    // 0x17c50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c510: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17C510u;
    SET_GPR_U32(ctx, 31, 0x17C518u);
    ctx->pc = 0x17C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C510u;
    // 0x17c514: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17C510u, 0x17C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C518u;
}
