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

// Function: cdvd_exit
// Address: 0x1ba0d8 - 0x1ba16c
void cdvd_exit_0x1ba0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cdvd_exit_0x1ba0d8");
#endif

    switch (ctx->pc) {
        case 0x1ba108u: goto label_1ba108;
        case 0x1ba120u: goto label_1ba120;
        case 0x1ba12cu: goto label_1ba12c;
        case 0x1ba134u: goto label_1ba134;
        case 0x1ba13cu: goto label_1ba13c;
        case 0x1ba14cu: goto label_1ba14c;
        default: break;
    }

    ctx->pc = 0x1ba0d8u;

    // 0x1ba0d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba0dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba0e0: 0x8c43c094  lw          $v1, -0x3F6C($v0)
    ctx->pc = 0x1ba0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C094u));
    // 0x1ba0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba0e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA0E8u;
    {
        const bool branch_taken_0x1ba0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0E8u;
        // 0x1ba0ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0e8) {
            ctx->pc = 0x1BA110u;
            goto label_1ba110;
        }
    }
    ctx->pc = 0x1BA0F0u;
    // 0x1ba0f0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba0f8: 0xac62c0d4  sw          $v0, -0x3F2C($v1)
    ctx->pc = 0x1ba0f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24C0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0D4u, _value); } while (0);
    // 0x1ba0fc: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba100: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA100u;
    SET_GPR_U32(ctx, 31, 0x1BA108u);
    ctx->pc = 0x1BA104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA100u;
    // 0x1ba104: 0x8e04c0a0  lw          $a0, -0x3F60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA100u, 0x1BA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA108u;
label_1ba108:
    // 0x1ba108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA108u;
    {
        const bool branch_taken_0x1ba108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA108u;
        // 0x1ba10c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba108) {
            ctx->pc = 0x1BA118u;
            goto label_1ba118;
        }
    }
    ctx->pc = 0x1BA110u;
label_1ba110:
    // 0x1ba110: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba110u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba114: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ba118:
    // 0x1ba118: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1BA118u;
    SET_GPR_U32(ctx, 31, 0x1BA120u);
    ctx->pc = 0x1BA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA118u;
    // 0x1ba11c: 0x8c44c0a8  lw          $a0, -0x3F58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1BA118u, 0x1BA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA120u;
label_1ba120:
    // 0x1ba120: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba124: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1BA124u;
    SET_GPR_U32(ctx, 31, 0x1BA12Cu);
    ctx->pc = 0x1BA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA124u;
    // 0x1ba128: 0x8c64c0ac  lw          $a0, -0x3F54($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1BA124u, 0x1BA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA12Cu;
label_1ba12c:
    // 0x1ba12c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1BA12Cu;
    SET_GPR_U32(ctx, 31, 0x1BA134u);
    ctx->pc = 0x1BA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA12Cu;
    // 0x1ba130: 0x8e04c0a0  lw          $a0, -0x3F60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1BA12Cu, 0x1BA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA134u;
label_1ba134:
    // 0x1ba134: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BA134u;
    SET_GPR_U32(ctx, 31, 0x1BA13Cu);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BA134u, 0x1BA13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA13Cu;
label_1ba13c:
    // 0x1ba13c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ba13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba144: 0xc06df26  jal         func_1B7C98
    ctx->pc = 0x1BA144u;
    SET_GPR_U32(ctx, 31, 0x1BA14Cu);
    ctx->pc = 0x1BA148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA144u;
    // 0x1ba148: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C98u, 0x1BA144u, 0x1BA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA14Cu;
label_1ba14c:
    // 0x1ba14c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA14Cu;
    {
        const bool branch_taken_0x1ba14c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA14Cu;
        // 0x1ba150: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba14c) {
            ctx->pc = 0x1BA160u;
            goto label_1ba160;
        }
    }
    ctx->pc = 0x1BA154u;
    // 0x1ba154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba158: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1BA158u;
    ctx->pc = 0x1BA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA158u;
    // 0x1ba15c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA160u;
label_1ba160:
    // 0x1ba160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba164: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA164u;
        // 0x1ba168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA16Cu;
}
