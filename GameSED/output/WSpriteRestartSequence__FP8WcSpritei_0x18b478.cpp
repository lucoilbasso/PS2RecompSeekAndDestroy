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

// Function: WSpriteRestartSequence__FP8WcSpritei
// Address: 0x18b478 - 0x18b518
void WSpriteRestartSequence__FP8WcSpritei_0x18b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteRestartSequence__FP8WcSpritei_0x18b478");
#endif

    switch (ctx->pc) {
        case 0x18b4a0u: goto label_18b4a0;
        case 0x18b4b0u: goto label_18b4b0;
        case 0x18b4b8u: goto label_18b4b8;
        case 0x18b4f0u: goto label_18b4f0;
        case 0x18b4f8u: goto label_18b4f8;
        default: break;
    }

    ctx->pc = 0x18b478u;

    // 0x18b478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b480: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18b488: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b48c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18b490: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18b494: 0x8e510208  lw          $s1, 0x208($s2)
    ctx->pc = 0x18b494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x18b498: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B498u;
    SET_GPR_U32(ctx, 31, 0x18B4A0u);
    ctx->pc = 0x18B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B498u;
    // 0x18b49c: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B498u, 0x18B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4A0u;
label_18b4a0:
    // 0x18b4a0: 0x5e00000f  bgtzl       $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x18B4A0u;
    {
        const bool branch_taken_0x18b4a0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x18b4a0) {
            ctx->pc = 0x18B4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B4A0u;
            // 0x18b4a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B4E0u;
            goto label_18b4e0;
        }
    }
    ctx->pc = 0x18B4A8u;
    // 0x18b4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B4A8u;
    {
        const bool branch_taken_0x18b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4A8u;
        // 0x18b4ac: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4a8) {
            ctx->pc = 0x18B4BCu;
            goto label_18b4bc;
        }
    }
    ctx->pc = 0x18B4B0u;
label_18b4b0:
    // 0x18b4b0: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B4B0u;
    SET_GPR_U32(ctx, 31, 0x18B4B8u);
    ctx->pc = 0x18B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4B0u;
    // 0x18b4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B4B0u, 0x18B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4B8u;
label_18b4b8:
    // 0x18b4b8: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18b4b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_18b4bc:
    // 0x18b4bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b4c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b4c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18b4c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b4cc: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B4CCu;
    {
        const bool branch_taken_0x18b4cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4CCu;
        // 0x18b4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4cc) {
            ctx->pc = 0x18B4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4b0;
        }
    }
    ctx->pc = 0x18B4D4u;
    // 0x18b4d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B4D4u;
    {
        const bool branch_taken_0x18b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4D4u;
        // 0x18b4d8: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4d4) {
            ctx->pc = 0x18B500u;
            goto label_18b500;
        }
    }
    ctx->pc = 0x18B4DCu;
    // 0x18b4dc: 0x0  nop
    ctx->pc = 0x18b4dcu;
    // NOP
label_18b4e0:
    // 0x18b4e0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B4E0u;
    {
        const bool branch_taken_0x18b4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4e0) {
            ctx->pc = 0x18B4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B4E0u;
            // 0x18b4e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B504u;
            goto label_18b504;
        }
    }
    ctx->pc = 0x18B4E8u;
    // 0x18b4e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18b4ec: 0x0  nop
    ctx->pc = 0x18b4ecu;
    // NOP
label_18b4f0:
    // 0x18b4f0: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B4F0u;
    SET_GPR_U32(ctx, 31, 0x18B4F8u);
    ctx->pc = 0x18B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4F0u;
    // 0x18b4f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B4F0u, 0x18B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4F8u;
label_18b4f8:
    // 0x18b4f8: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x18B4F8u;
    {
        const bool branch_taken_0x18b4f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4F8u;
        // 0x18b4fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4f8) {
            ctx->pc = 0x18B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4f0;
        }
    }
    ctx->pc = 0x18B500u;
label_18b500:
    // 0x18b500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18b504:
    // 0x18b504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18b504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18b508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b50c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18b50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18b510: 0x3e00008  jr          $ra
    ctx->pc = 0x18B510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B510u;
        // 0x18b514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B518u;
}
