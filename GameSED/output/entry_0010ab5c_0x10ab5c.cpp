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

// Function: entry_0010ab5c
// Address: 0x10ab5c - 0x10abd8
void entry_0010ab5c_0x10ab5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab5c_0x10ab5c");
#endif

    switch (ctx->pc) {
        case 0x10ab6cu: goto label_10ab6c;
        case 0x10ab78u: goto label_10ab78;
        case 0x10aba0u: goto label_10aba0;
        case 0x10abb0u: goto label_10abb0;
        default: break;
    }

    ctx->pc = 0x10ab5cu;

label_10ab5c:
    // 0x10ab5c: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x10ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
label_10ab60:
    // 0x10ab60: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_10ab64:
    // 0x10ab64: 0xc0682b2  jal         func_1A0AC8
label_10ab68:
    if (ctx->pc == 0x10AB68u) {
        ctx->pc = 0x10AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB64u;
        // 0x10ab68: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB6Cu;
        goto label_10ab6c;
    }
    ctx->pc = 0x10AB64u;
    SET_GPR_U32(ctx, 31, 0x10AB6Cu);
    ctx->pc = 0x10AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB64u;
    // 0x10ab68: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10AB64u, 0x10AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB6Cu;
label_10ab6c:
    // 0x10ab6c: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x10ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
label_10ab70:
    // 0x10ab70: 0xc0682b6  jal         func_1A0AD8
label_10ab74:
    if (ctx->pc == 0x10AB74u) {
        ctx->pc = 0x10AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB70u;
        // 0x10ab74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB78u;
        goto label_10ab78;
    }
    ctx->pc = 0x10AB70u;
    SET_GPR_U32(ctx, 31, 0x10AB78u);
    ctx->pc = 0x10AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB70u;
    // 0x10ab74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10AB70u, 0x10AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB78u;
label_10ab78:
    // 0x10ab78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ab7c:
    // 0x10ab7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ab7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ab80:
    // 0x10ab80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_10ab84:
    // 0x10ab84: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x10ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_10ab88:
    // 0x10ab88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10ab88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10ab8c:
    // 0x10ab8c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_10ab90:
    // 0x10ab90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ab94:
    // 0x10ab94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x10ab94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ab98:
    // 0x10ab98: 0xc063114  jal         func_18C450
label_10ab9c:
    if (ctx->pc == 0x10AB9Cu) {
        ctx->pc = 0x10AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB98u;
        // 0x10ab9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABA0u;
        goto label_10aba0;
    }
    ctx->pc = 0x10AB98u;
    SET_GPR_U32(ctx, 31, 0x10ABA0u);
    ctx->pc = 0x10AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB98u;
    // 0x10ab9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x10AB98u, 0x10ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABA0u;
label_10aba0:
    // 0x10aba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10aba4:
    // 0x10aba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10aba8:
    // 0x10aba8: 0xc06825c  jal         func_1A0970
label_10abac:
    if (ctx->pc == 0x10ABACu) {
        ctx->pc = 0x10ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABA8u;
        // 0x10abac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABB0u;
        goto label_10abb0;
    }
    ctx->pc = 0x10ABA8u;
    SET_GPR_U32(ctx, 31, 0x10ABB0u);
    ctx->pc = 0x10ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABA8u;
    // 0x10abac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10ABA8u, 0x10ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABB0u;
label_10abb0:
    // 0x10abb0: 0x26a3fff5  addiu       $v1, $s5, -0xB
    ctx->pc = 0x10abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967285));
label_10abb4:
    // 0x10abb4: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x10abb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_10abb8:
    // 0x10abb8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_10abbc:
    if (ctx->pc == 0x10ABBCu) {
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABC0u;
        goto label_10abc0;
    }
    ctx->pc = 0x10ABB8u;
    {
        const bool branch_taken_0x10abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abb8) {
            ctx->pc = 0x10ACE0u;
            return;
        }
    }
    ctx->pc = 0x10ABC0u;
label_10abc0:
    // 0x10abc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10abc4:
    // 0x10abc4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_10abc8:
    // 0x10abc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10abcc:
    // 0x10abcc: 0x8c633c00  lw          $v1, 0x3C00($v1)
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15360)));
label_10abd0:
    // 0x10abd0: 0x600008  jr          $v1
label_10abd4:
    if (ctx->pc == 0x10ABD4u) {
        ctx->pc = 0x10ABD8u;
        goto label_fallthrough_0x10abd0;
    }
    ctx->pc = 0x10ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10abd0:
    ctx->pc = 0x10ABD8u;
}
