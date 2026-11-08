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

// Function: FontDataLoad__9WcFontManUi
// Address: 0x17c830 - 0x17c8dc
void FontDataLoad__9WcFontManUi_0x17c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontDataLoad__9WcFontManUi_0x17c830");
#endif

    switch (ctx->pc) {
        case 0x17c870u: goto label_17c870;
        case 0x17c8b0u: goto label_17c8b0;
        case 0x17c8b8u: goto label_17c8b8;
        default: break;
    }

    ctx->pc = 0x17c830u;

    // 0x17c830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c83c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17c840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c848: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17c848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c84c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c850: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17c854: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x17c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17c858: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x17C858u;
    {
        const bool branch_taken_0x17c858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c858) {
            ctx->pc = 0x17C85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C858u;
            // 0x17c85c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8C8u;
            goto label_17c8c8;
        }
    }
    ctx->pc = 0x17C860u;
    // 0x17c860: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17c864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c868: 0x2443e9e0  addiu       $v1, $v0, -0x1620
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x17c86c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c870:
    // 0x17c870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c874: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x17C874u;
    {
        const bool branch_taken_0x17c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17c874) {
            ctx->pc = 0x17C878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C874u;
            // 0x17c878: 0x8c710004  lw          $s1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C87Cu;
            goto label_17c87c;
        }
    }
    ctx->pc = 0x17C87Cu;
label_17c87c:
    // 0x17c87c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17c880: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x17c880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c884: 0x0  nop
    ctx->pc = 0x17c884u;
    // NOP
    // 0x17c888: 0x0  nop
    ctx->pc = 0x17c888u;
    // NOP
    // 0x17c88c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17C88Cu;
    {
        const bool branch_taken_0x17c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C88Cu;
        // 0x17c890: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c88c) {
            ctx->pc = 0x17C870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c870;
        }
    }
    ctx->pc = 0x17C894u;
    // 0x17c894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c898: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C898u;
    {
        const bool branch_taken_0x17c898 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C898u;
        // 0x17c89c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c898) {
            ctx->pc = 0x17C8B0u;
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C8A0u;
    // 0x17c8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8a4: 0x24a57b40  addiu       $a1, $a1, 0x7B40
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31552));
    // 0x17c8a8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17C8A8u;
    SET_GPR_U32(ctx, 31, 0x17C8B0u);
    ctx->pc = 0x17C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8A8u;
    // 0x17c8ac: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17C8A8u, 0x17C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8B0u;
label_17c8b0:
    // 0x17c8b0: 0xc060ebc  jal         func_183AF0
    ctx->pc = 0x17C8B0u;
    SET_GPR_U32(ctx, 31, 0x17C8B8u);
    ctx->pc = 0x17C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8B0u;
    // 0x17c8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AF0u, 0x17C8B0u, 0x17C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8B8u;
label_17c8b8:
    // 0x17c8b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c8bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x17c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x17c8c0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x17c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x17c8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c8c8:
    // 0x17c8c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c8cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c8ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c8d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D4u;
        // 0x17c8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C8DCu;
}
