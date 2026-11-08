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

// Function: RotCoord__8WcEntityi11CoordSelectb
// Address: 0x1dcfd0 - 0x1dd084
void RotCoord__8WcEntityi11CoordSelectb_0x1dcfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RotCoord__8WcEntityi11CoordSelectb_0x1dcfd0");
#endif

    ctx->pc = 0x1dcfd0u;

    // 0x1dcfd0: 0x14e0000f  bnez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1DCFD0u;
    {
        const bool branch_taken_0x1dcfd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFD0u;
        // 0x1dcfd4: 0x24880030  addiu       $t0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfd0) {
            ctx->pc = 0x1DD010u;
            goto label_1dd010;
        }
    }
    ctx->pc = 0x1DCFD8u;
    // 0x1dcfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcfdc: 0x50c20024  beql        $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DCFDCu;
    {
        const bool branch_taken_0x1dcfdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcfdc) {
            ctx->pc = 0x1DCFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCFDCu;
            // 0x1dcfe0: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD070u;
            goto label_1dd070;
        }
    }
    ctx->pc = 0x1DCFE4u;
    // 0x1dcfe4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1dcfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcfe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCFE8u;
    {
        const bool branch_taken_0x1dcfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFE8u;
        // 0x1dcfec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfe8) {
            ctx->pc = 0x1DD000u;
            goto label_1dd000;
        }
    }
    ctx->pc = 0x1DCFF0u;
    // 0x1dcff0: 0x50c0001f  beql        $a2, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DCFF0u;
    {
        const bool branch_taken_0x1dcff0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcff0) {
            ctx->pc = 0x1DCFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCFF0u;
            // 0x1dcff4: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD070u;
            goto label_1dd070;
        }
    }
    ctx->pc = 0x1DCFF8u;
    // 0x1dcff8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DCFF8u;
    {
        const bool branch_taken_0x1dcff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF8u;
        // 0x1dcffc: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcff8) {
            ctx->pc = 0x1DD074u;
            goto label_1dd074;
        }
    }
    ctx->pc = 0x1DD000u;
label_1dd000:
    // 0x1dd000: 0x50c2001b  beql        $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DD000u;
    {
        const bool branch_taken_0x1dd000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd000) {
            ctx->pc = 0x1DD004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD000u;
            // 0x1dd004: 0xad050008  sw          $a1, 0x8($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD070u;
            goto label_1dd070;
        }
    }
    ctx->pc = 0x1DD008u;
    // 0x1dd008: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DD008u;
    {
        const bool branch_taken_0x1dd008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD008u;
        // 0x1dd00c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd008) {
            ctx->pc = 0x1DD074u;
            goto label_1dd074;
        }
    }
    ctx->pc = 0x1DD010u;
label_1dd010:
    // 0x1dd010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd014: 0x50c20010  beql        $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD014u;
    {
        const bool branch_taken_0x1dd014 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd014) {
            ctx->pc = 0x1DD018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD014u;
            // 0x1dd018: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD058u;
            goto label_1dd058;
        }
    }
    ctx->pc = 0x1DD01Cu;
    // 0x1dd01c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1dd01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD020u;
    {
        const bool branch_taken_0x1dd020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD020u;
        // 0x1dd024: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd020) {
            ctx->pc = 0x1DD038u;
            goto label_1dd038;
        }
    }
    ctx->pc = 0x1DD028u;
    // 0x1dd028: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD028u;
    {
        const bool branch_taken_0x1dd028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd028) {
            ctx->pc = 0x1DD02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD028u;
            // 0x1dd02c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD048u;
            goto label_1dd048;
        }
    }
    ctx->pc = 0x1DD030u;
    // 0x1dd030: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD030u;
    {
        const bool branch_taken_0x1dd030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD030u;
        // 0x1dd034: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd030) {
            ctx->pc = 0x1DD074u;
            goto label_1dd074;
        }
    }
    ctx->pc = 0x1DD038u;
label_1dd038:
    // 0x1dd038: 0x50c2000b  beql        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD038u;
    {
        const bool branch_taken_0x1dd038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd038) {
            ctx->pc = 0x1DD03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD038u;
            // 0x1dd03c: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD068u;
            goto label_1dd068;
        }
    }
    ctx->pc = 0x1DD040u;
    // 0x1dd040: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DD040u;
    {
        const bool branch_taken_0x1dd040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD040u;
        // 0x1dd044: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd040) {
            ctx->pc = 0x1DD074u;
            goto label_1dd074;
        }
    }
    ctx->pc = 0x1DD048u;
label_1dd048:
    // 0x1dd048: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD04Cu;
    {
        const bool branch_taken_0x1dd04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD04Cu;
        // 0x1dd050: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd04c) {
            ctx->pc = 0x1DD070u;
            goto label_1dd070;
        }
    }
    ctx->pc = 0x1DD054u;
    // 0x1dd054: 0x0  nop
    ctx->pc = 0x1dd054u;
    // NOP
label_1dd058:
    // 0x1dd058: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd05c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD05Cu;
    {
        const bool branch_taken_0x1dd05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD05Cu;
        // 0x1dd060: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd05c) {
            ctx->pc = 0x1DD070u;
            goto label_1dd070;
        }
    }
    ctx->pc = 0x1DD064u;
    // 0x1dd064: 0x0  nop
    ctx->pc = 0x1dd064u;
    // NOP
label_1dd068:
    // 0x1dd068: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd06c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1dd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_1dd070:
    // 0x1dd070: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1dd074:
    // 0x1dd074: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1dd074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1dd078: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1dd078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1dd07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD07Cu;
        // 0x1dd080: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD084u;
}
