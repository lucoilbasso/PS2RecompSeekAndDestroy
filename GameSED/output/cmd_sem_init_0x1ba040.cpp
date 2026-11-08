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

// Function: cmd_sem_init
// Address: 0x1ba040 - 0x1ba0d4
void cmd_sem_init_0x1ba040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cmd_sem_init_0x1ba040");
#endif

    switch (ctx->pc) {
        case 0x1ba094u: goto label_1ba094;
        case 0x1ba0a0u: goto label_1ba0a0;
        case 0x1ba0b0u: goto label_1ba0b0;
        default: break;
    }

    ctx->pc = 0x1ba040u;

    // 0x1ba040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba044: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba048: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ba048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ba04c: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1ba04cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1ba050: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ba050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ba054: 0x8e22c0a8  lw          $v0, -0x3F58($s1)
    ctx->pc = 0x1ba054u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24C0A8u));
    // 0x1ba058: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA058u;
    {
        const bool branch_taken_0x1ba058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA058u;
        // 0x1ba05c: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba058) {
            ctx->pc = 0x1BA078u;
            goto label_1ba078;
        }
    }
    ctx->pc = 0x1BA060u;
    // 0x1ba060: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba064: 0x8e02c0ac  lw          $v0, -0x3F54($s0)
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24C0ACu));
    // 0x1ba068: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA068u;
    {
        const bool branch_taken_0x1ba068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA068u;
        // 0x1ba06c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba068) {
            ctx->pc = 0x1BA0C4u;
            goto label_1ba0c4;
        }
    }
    ctx->pc = 0x1BA070u;
    // 0x1ba070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA070u;
    {
        const bool branch_taken_0x1ba070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA070u;
        // 0x1ba074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba070) {
            ctx->pc = 0x1BA080u;
            goto label_1ba080;
        }
    }
    ctx->pc = 0x1BA078u;
label_1ba078:
    // 0x1ba078: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba080:
    // 0x1ba080: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ba080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ba084: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ba084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ba088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba08c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1BA08Cu;
    SET_GPR_U32(ctx, 31, 0x1BA094u);
    ctx->pc = 0x1BA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA08Cu;
    // 0x1ba090: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1BA08Cu, 0x1BA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA094u;
label_1ba094:
    // 0x1ba094: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba098: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1BA098u;
    SET_GPR_U32(ctx, 31, 0x1BA0A0u);
    ctx->pc = 0x1BA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA098u;
    // 0x1ba09c: 0xae22c0a8  sw          $v0, -0x3F58($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951080), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1BA098u, 0x1BA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0A0u;
label_1ba0a0:
    // 0x1ba0a0: 0xae02c0ac  sw          $v0, -0x3F54($s0)
    ctx->pc = 0x1ba0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951084), GPR_U32(ctx, 2));
    // 0x1ba0a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0a8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1BA0A8u;
    SET_GPR_U32(ctx, 31, 0x1BA0B0u);
    ctx->pc = 0x1BA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA0A8u;
    // 0x1ba0ac: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1BA0A8u, 0x1BA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0B0u;
label_1ba0b0:
    // 0x1ba0b0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba0b4: 0xac62c0a0  sw          $v0, -0x3F60($v1)
    ctx->pc = 0x1ba0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24C0A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0A0u, _value); } while (0);
    // 0x1ba0b8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba0bc: 0xac40c0b0  sw          $zero, -0x3F50($v0)
    ctx->pc = 0x1ba0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24C0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0B0u, _value); } while (0);
    // 0x1ba0c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ba0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba0c4:
    // 0x1ba0c4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ba0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba0c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ba0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0CCu;
        // 0x1ba0d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA0D4u;
}
