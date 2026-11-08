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

// Function: B_Kanji2JIS__FUi
// Address: 0x19d130 - 0x19d194
void B_Kanji2JIS__FUi_0x19d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Kanji2JIS__FUi_0x19d130");
#endif

    ctx->pc = 0x19d130u;

    // 0x19d130: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19d130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19d134: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19d134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19d138: 0x2466f1d8  addiu       $a2, $v1, -0xE28
    ctx->pc = 0x19d138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963672));
    // 0x19d13c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x19d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19d140: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19d144: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x19d144u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d148: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19D148u;
    {
        const bool branch_taken_0x19d148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D148u;
        // 0x19d14c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d148) {
            ctx->pc = 0x19D184u;
            goto label_19d184;
        }
    }
    ctx->pc = 0x19D150u;
    // 0x19d150: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D150u;
    {
        const bool branch_taken_0x19d150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D150u;
        // 0x19d154: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d150) {
            ctx->pc = 0x19D170u;
            goto label_19d170;
        }
    }
    ctx->pc = 0x19D158u;
    // 0x19d158: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x19d158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d15c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19D15Cu;
    {
        const bool branch_taken_0x19d15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d15c) {
            ctx->pc = 0x19D160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D15Cu;
            // 0x19d160: 0x3c03000f  lui         $v1, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D188u;
            goto label_19d188;
        }
    }
    ctx->pc = 0x19D164u;
    // 0x19d164: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x19d168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19D168u;
    {
        const bool branch_taken_0x19d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D168u;
        // 0x19d16c: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d168) {
            ctx->pc = 0x19D18Cu;
            goto label_19d18c;
        }
    }
    ctx->pc = 0x19D170u;
label_19d170:
    // 0x19d170: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19d174: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d178: 0x9042f2d8  lbu         $v0, -0xD28($v0)
    ctx->pc = 0x19d178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963928)));
    // 0x19d17c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D17Cu;
    {
        const bool branch_taken_0x19d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D17Cu;
        // 0x19d180: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d17c) {
            ctx->pc = 0x19D18Cu;
            goto label_19d18c;
        }
    }
    ctx->pc = 0x19D184u;
label_19d184:
    // 0x19d184: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19d184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_19d188:
    // 0x19d188: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19d188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19d18c:
    // 0x19d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D18Cu;
        // 0x19d190: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D194u;
}
