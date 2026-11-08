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

// Function: Create__6WcPostP8WcMulobj
// Address: 0x1e01b8 - 0x1e023c
void Create__6WcPostP8WcMulobj_0x1e01b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__6WcPostP8WcMulobj_0x1e01b8");
#endif

    switch (ctx->pc) {
        case 0x1e01d4u: goto label_1e01d4;
        case 0x1e01dcu: goto label_1e01dc;
        case 0x1e01f4u: goto label_1e01f4;
        case 0x1e0224u: goto label_1e0224;
        default: break;
    }

    ctx->pc = 0x1e01b8u;

    // 0x1e01b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e01b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e01bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e01bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e01c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e01c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e01c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e01cc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1E01CCu;
    SET_GPR_U32(ctx, 31, 0x1E01D4u);
    ctx->pc = 0x1E01D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01CCu;
    // 0x1e01d0: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1E01CCu, 0x1E01D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01D4u;
label_1e01d4:
    // 0x1e01d4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1E01D4u;
    SET_GPR_U32(ctx, 31, 0x1E01DCu);
    ctx->pc = 0x1E01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01D4u;
    // 0x1e01d8: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1E01D4u, 0x1E01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01DCu;
label_1e01dc:
    // 0x1e01dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e01dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e01e4: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x1e01e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e01e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01ec: 0xc064e54  jal         func_193950
    ctx->pc = 0x1E01ECu;
    SET_GPR_U32(ctx, 31, 0x1E01F4u);
    ctx->pc = 0x1E01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01ECu;
    // 0x1e01f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x1E01ECu, 0x1E01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01F4u;
label_1e01f4:
    // 0x1e01f4: 0x24040346  addiu       $a0, $zero, 0x346
    ctx->pc = 0x1e01f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x1e01f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e01fc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1e01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1e0200: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1e0204: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1e0204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1e0208: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e020c: 0xae1101b0  sw          $s1, 0x1B0($s0)
    ctx->pc = 0x1e020cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 17));
    // 0x1e0210: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e0210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e0214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0218: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1e0218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1e021c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1E021Cu;
    SET_GPR_U32(ctx, 31, 0x1E0224u);
    ctx->pc = 0x1E0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E021Cu;
    // 0x1e0220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1E021Cu, 0x1E0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0224u;
label_1e0224:
    // 0x1e0224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e022c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e022cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0234: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0234u;
        // 0x1e0238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E023Cu;
}
