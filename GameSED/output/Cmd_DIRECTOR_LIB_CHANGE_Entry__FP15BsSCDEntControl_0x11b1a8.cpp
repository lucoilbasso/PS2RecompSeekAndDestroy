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

// Function: Cmd_DIRECTOR_LIB_CHANGE_Entry__FP15BsSCDEntControl
// Address: 0x11b1a8 - 0x11b26c
void Cmd_DIRECTOR_LIB_CHANGE_Entry__FP15BsSCDEntControl_0x11b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_LIB_CHANGE_Entry__FP15BsSCDEntControl_0x11b1a8");
#endif

    switch (ctx->pc) {
        case 0x11b1e4u: goto label_11b1e4;
        case 0x11b1ecu: goto label_11b1ec;
        case 0x11b238u: goto label_11b238;
        case 0x11b240u: goto label_11b240;
        case 0x11b254u: goto label_11b254;
        default: break;
    }

    ctx->pc = 0x11b1a8u;

    // 0x11b1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b1b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b1b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b1bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11b1c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11b1c4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11b1c8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x11b1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x11b1cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11b1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11b1d0: 0x8c710040  lw          $s1, 0x40($v1)
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11b1d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B1D4u;
    {
        const bool branch_taken_0x11b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1D4u;
        // 0x11b1d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1d4) {
            ctx->pc = 0x11B1E4u;
            goto label_11b1e4;
        }
    }
    ctx->pc = 0x11B1DCu;
    // 0x11b1dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11B1DCu;
    SET_GPR_U32(ctx, 31, 0x11B1E4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11B1DCu, 0x11B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1E4u;
label_11b1e4:
    // 0x11b1e4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11B1E4u;
    SET_GPR_U32(ctx, 31, 0x11B1ECu);
    ctx->pc = 0x11B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1E4u;
    // 0x11b1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11B1E4u, 0x11B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1ECu;
label_11b1ec:
    // 0x11b1ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B1ECu;
    {
        const bool branch_taken_0x11b1ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1ECu;
        // 0x11b1f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1ec) {
            ctx->pc = 0x11B200u;
            goto label_11b200;
        }
    }
    ctx->pc = 0x11B1F4u;
    // 0x11b1f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11B1F4u;
    {
        const bool branch_taken_0x11b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1F4u;
        // 0x11b1f8: 0xae23008c  sw          $v1, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1f4) {
            ctx->pc = 0x11B254u;
            goto label_11b254;
        }
    }
    ctx->pc = 0x11B1FCu;
    // 0x11b1fc: 0x0  nop
    ctx->pc = 0x11b1fcu;
    // NOP
label_11b200:
    // 0x11b200: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11b204: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x11b204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b208: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x11b208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x11b20c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b210: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x11b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x11b214: 0x24c6b510  addiu       $a2, $a2, -0x4AF0
    ctx->pc = 0x11b214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948112));
    // 0x11b218: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x11b218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x11b21c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x11b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x11b220: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x11b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x11b224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b228: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b22c: 0x260800c0  addiu       $t0, $s0, 0xC0
    ctx->pc = 0x11b22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x11b230: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B230u;
    SET_GPR_U32(ctx, 31, 0x11B238u);
    ctx->pc = 0x11B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B230u;
    // 0x11b234: 0x240907f8  addiu       $t1, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B230u, 0x11B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B238u;
label_11b238:
    // 0x11b238: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x11B238u;
    SET_GPR_U32(ctx, 31, 0x11B240u);
    ctx->pc = 0x11B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B238u;
    // 0x11b23c: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x11B238u, 0x11B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B240u;
label_11b240:
    // 0x11b240: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x11b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11b244: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11B244u;
    {
        const bool branch_taken_0x11b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B244u;
        // 0x11b248: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b244) {
            ctx->pc = 0x11B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b238;
        }
    }
    ctx->pc = 0x11B24Cu;
    // 0x11b24c: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B24Cu;
    SET_GPR_U32(ctx, 31, 0x11B254u);
    ctx->pc = 0x11B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B24Cu;
    // 0x11b250: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B24Cu, 0x11B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B254u;
label_11b254:
    // 0x11b254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b25c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b260: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b264: 0x3e00008  jr          $ra
    ctx->pc = 0x11B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B264u;
        // 0x11b268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B26Cu;
}
