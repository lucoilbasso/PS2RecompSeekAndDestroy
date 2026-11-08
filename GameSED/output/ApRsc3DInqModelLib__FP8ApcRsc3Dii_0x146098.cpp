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

// Function: ApRsc3DInqModelLib__FP8ApcRsc3Dii
// Address: 0x146098 - 0x146164
void ApRsc3DInqModelLib__FP8ApcRsc3Dii_0x146098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DInqModelLib__FP8ApcRsc3Dii_0x146098");
#endif

    switch (ctx->pc) {
        case 0x146104u: goto label_146104;
        case 0x146120u: goto label_146120;
        case 0x146148u: goto label_146148;
        default: break;
    }

    ctx->pc = 0x146098u;

    // 0x146098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14609c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1460a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1460a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1460a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1460a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1460a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1460ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1460acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1460b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1460b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1460b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460b8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1460B8u;
    {
        const bool branch_taken_0x1460b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460B8u;
        // 0x1460bc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460b8) {
            ctx->pc = 0x1460F0u;
            goto label_1460f0;
        }
    }
    ctx->pc = 0x1460C0u;
    // 0x1460c0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1460c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1460c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1460C4u;
    {
        const bool branch_taken_0x1460c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460c4) {
            ctx->pc = 0x1460C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460C4u;
            // 0x1460c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1460E0u;
            goto label_1460e0;
        }
    }
    ctx->pc = 0x1460CCu;
    // 0x1460cc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1460CCu;
    {
        const bool branch_taken_0x1460cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460cc) {
            ctx->pc = 0x146104u;
            goto label_146104;
        }
    }
    ctx->pc = 0x1460D4u;
    // 0x1460d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1460D4u;
    {
        const bool branch_taken_0x1460d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460D4u;
        // 0x1460d8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460d4) {
            ctx->pc = 0x1460F8u;
            goto label_1460f8;
        }
    }
    ctx->pc = 0x1460DCu;
    // 0x1460dc: 0x0  nop
    ctx->pc = 0x1460dcu;
    // NOP
label_1460e0:
    // 0x1460e0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1460E0u;
    {
        const bool branch_taken_0x1460e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1460e0) {
            ctx->pc = 0x1460E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460E0u;
            // 0x1460e4: 0x8e300058  lw          $s0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146104u;
            goto label_146104;
        }
    }
    ctx->pc = 0x1460E8u;
    // 0x1460e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1460E8u;
    {
        const bool branch_taken_0x1460e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460E8u;
        // 0x1460ec: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460e8) {
            ctx->pc = 0x1460F8u;
            goto label_1460f8;
        }
    }
    ctx->pc = 0x1460F0u;
label_1460f0:
    // 0x1460f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1460F0u;
    {
        const bool branch_taken_0x1460f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460F0u;
        // 0x1460f4: 0x8e300034  lw          $s0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460f0) {
            ctx->pc = 0x146104u;
            goto label_146104;
        }
    }
    ctx->pc = 0x1460F8u;
label_1460f8:
    // 0x1460f8: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1460fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1460FCu;
    SET_GPR_U32(ctx, 31, 0x146104u);
    ctx->pc = 0x146100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460FCu;
    // 0x146100: 0x24a56a98  addiu       $a1, $a1, 0x6A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1460FCu, 0x146104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146104u;
label_146104:
    // 0x146104: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146104u;
    {
        const bool branch_taken_0x146104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x146104) {
            ctx->pc = 0x146108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146104u;
            // 0x146108: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146128u;
            goto label_146128;
        }
    }
    ctx->pc = 0x14610Cu;
    // 0x14610c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x146110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146114: 0x24a56ab0  addiu       $a1, $a1, 0x6AB0
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27312));
    // 0x146118: 0xc068186  jal         func_1A0618
    ctx->pc = 0x146118u;
    SET_GPR_U32(ctx, 31, 0x146120u);
    ctx->pc = 0x14611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146118u;
    // 0x14611c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x146118u, 0x146120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146120u;
label_146120:
    // 0x146120: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146120u;
    {
        const bool branch_taken_0x146120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146120u;
        // 0x146124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146120) {
            ctx->pc = 0x14614Cu;
            goto label_14614c;
        }
    }
    ctx->pc = 0x146128u;
label_146128:
    // 0x146128: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x146128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14612c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14612Cu;
    {
        const bool branch_taken_0x14612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14612c) {
            ctx->pc = 0x146130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14612Cu;
            // 0x146130: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14614Cu;
            goto label_14614c;
        }
    }
    ctx->pc = 0x146134u;
    // 0x146134: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x146138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14613c: 0x24a56ab0  addiu       $a1, $a1, 0x6AB0
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27312));
    // 0x146140: 0xc068186  jal         func_1A0618
    ctx->pc = 0x146140u;
    SET_GPR_U32(ctx, 31, 0x146148u);
    ctx->pc = 0x146144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146140u;
    // 0x146144: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x146140u, 0x146148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146148u;
label_146148:
    // 0x146148: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14614c:
    // 0x14614c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14614cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x146154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146158: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x146158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14615c: 0x3e00008  jr          $ra
    ctx->pc = 0x14615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14615Cu;
        // 0x146160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146164u;
}
