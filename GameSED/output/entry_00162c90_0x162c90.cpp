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

// Function: entry_00162c90
// Address: 0x162c90 - 0x162d1c
void entry_00162c90_0x162c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c90_0x162c90");
#endif

    switch (ctx->pc) {
        case 0x162c98u: goto label_162c98;
        case 0x162ca0u: goto label_162ca0;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cfcu: goto label_162cfc;
        default: break;
    }

    ctx->pc = 0x162c90u;

    // 0x162c90: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x162C90u;
    SET_GPR_U32(ctx, 31, 0x162C98u);
    ctx->pc = 0x162C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C90u;
    // 0x162c94: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x162C90u, 0x162C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C98u;
label_162c98:
    // 0x162c98: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x162C98u;
    SET_GPR_U32(ctx, 31, 0x162CA0u);
    ctx->pc = 0x162C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C98u;
    // 0x162c9c: 0x240406c0  addiu       $a0, $zero, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x162C98u, 0x162CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CA0u;
label_162ca0:
    // 0x162ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ca4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x162ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x162ca8: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x162ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x162cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cb0: 0xc065eac  jal         func_197AB0
    ctx->pc = 0x162CB0u;
    SET_GPR_U32(ctx, 31, 0x162CB8u);
    ctx->pc = 0x162CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CB0u;
    // 0x162cb4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197AB0u, 0x162CB0u, 0x162CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CB8u;
label_162cb8:
    // 0x162cb8: 0xae110600  sw          $s1, 0x600($s0)
    ctx->pc = 0x162cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 17));
    // 0x162cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cc0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x162CC0u;
    SET_GPR_U32(ctx, 31, 0x162CC8u);
    ctx->pc = 0x162CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CC0u;
    // 0x162cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x162CC0u, 0x162CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CC8u;
label_162cc8:
    // 0x162cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ccc: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x162cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x162cd0: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x162CD0u;
    SET_GPR_U32(ctx, 31, 0x162CD8u);
    ctx->pc = 0x162CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CD0u;
    // 0x162cd4: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x162CD0u, 0x162CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CD8u;
label_162cd8:
    // 0x162cd8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162cdc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x162cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x162ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ce4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x162ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x162ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x162ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162cf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x162cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cf4: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x162CF4u;
    SET_GPR_U32(ctx, 31, 0x162CFCu);
    ctx->pc = 0x162CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CF4u;
    // 0x162cf8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x162CF4u, 0x162CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CFCu;
label_162cfc:
    // 0x162cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x162d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162d0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x162d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x162d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162d14: 0x3e00008  jr          $ra
    ctx->pc = 0x162D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D14u;
        // 0x162d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D1Cu;
}
