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

// Function: entry_00110010
// Address: 0x110010 - 0x110070
void entry_00110010_0x110010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110010_0x110010");
#endif

    switch (ctx->pc) {
        case 0x110030u: goto label_110030;
        case 0x11004cu: goto label_11004c;
        default: break;
    }

    ctx->pc = 0x110010u;

label_110010:
    // 0x110010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_110014:
    // 0x110014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_110018:
    // 0x110018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11001c:
    // 0x11001c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_110020:
    // 0x110020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x110020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110024:
    // 0x110024: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_110028:
    // 0x110028: 0xc04110c  jal         func_104430
label_11002c:
    if (ctx->pc == 0x11002Cu) {
        ctx->pc = 0x11002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110028u;
        // 0x11002c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110030u;
        goto label_110030;
    }
    ctx->pc = 0x110028u;
    SET_GPR_U32(ctx, 31, 0x110030u);
    ctx->pc = 0x11002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110028u;
    // 0x11002c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110028u, 0x110030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110030u;
label_110030:
    // 0x110030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110034:
    // 0x110034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110038:
    // 0x110038: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x110038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_11003c:
    // 0x11003c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_110040:
    if (ctx->pc == 0x110040u) {
        ctx->pc = 0x110040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11003Cu;
        // 0x110040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110044u;
        goto label_110044;
    }
    ctx->pc = 0x11003Cu;
    {
        const bool branch_taken_0x11003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11003Cu;
        // 0x110040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11003c) {
            ctx->pc = 0x110070u;
            return;
        }
    }
    ctx->pc = 0x110044u;
label_110044:
    // 0x110044: 0xc061de8  jal         func_1877A0
label_110048:
    if (ctx->pc == 0x110048u) {
        ctx->pc = 0x11004Cu;
        goto label_11004c;
    }
    ctx->pc = 0x110044u;
    SET_GPR_U32(ctx, 31, 0x11004Cu);
    ctx->pc = 0x1877A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877A0u, 0x110044u, 0x11004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11004Cu;
label_11004c:
    // 0x11004c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_110050:
    // 0x110050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110054:
    // 0x110054: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x110054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_110058:
    // 0x110058: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x110058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11005c:
    // 0x11005c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x11005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_110060:
    // 0x110060: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x110060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_110064:
    // 0x110064: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x110064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_110068:
    // 0x110068: 0x60f809  jalr        $v1
label_11006c:
    if (ctx->pc == 0x11006Cu) {
        ctx->pc = 0x11006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110068u;
        // 0x11006c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110070u;
        goto label_fallthrough_0x110068;
    }
    ctx->pc = 0x110068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110070u);
        ctx->pc = 0x11006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110068u;
        // 0x11006c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110068u, 0x110070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x110068:
    ctx->pc = 0x110070u;
}
