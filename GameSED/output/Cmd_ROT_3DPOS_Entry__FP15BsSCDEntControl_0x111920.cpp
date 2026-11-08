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

// Function: Cmd_ROT_3DPOS_Entry__FP15BsSCDEntControl
// Address: 0x111920 - 0x1119e0
void Cmd_ROT_3DPOS_Entry__FP15BsSCDEntControl_0x111920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ROT_3DPOS_Entry__FP15BsSCDEntControl_0x111920");
#endif

    switch (ctx->pc) {
        case 0x111944u: goto label_111944;
        case 0x111990u: goto label_111990;
        case 0x1119acu: goto label_1119ac;
        case 0x1119c4u: goto label_1119c4;
        default: break;
    }

    ctx->pc = 0x111920u;

    // 0x111920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111924: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111928: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x111928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11192c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11192cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111930: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111934: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x111934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x111938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11193c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11193Cu;
    SET_GPR_U32(ctx, 31, 0x111944u);
    ctx->pc = 0x111940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11193Cu;
    // 0x111940: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11193Cu, 0x111944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111944u;
label_111944:
    // 0x111944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111948: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11194c: 0x51a03  sra         $v1, $a1, 8
    ctx->pc = 0x11194cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 8));
    // 0x111950: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x111950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x111954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x111954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111958: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x111958u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x11195c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11195Cu;
    {
        const bool branch_taken_0x11195c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x111960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11195Cu;
        // 0x111960: 0x30730001  andi        $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11195c) {
            ctx->pc = 0x111978u;
            goto label_111978;
        }
    }
    ctx->pc = 0x111964u;
    // 0x111964: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x111964u;
    {
        const bool branch_taken_0x111964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x111964) {
            ctx->pc = 0x111968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111964u;
            // 0x111968: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111990u;
            goto label_111990;
        }
    }
    ctx->pc = 0x11196Cu;
    // 0x11196c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11196Cu;
    {
        const bool branch_taken_0x11196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11196c) {
            ctx->pc = 0x111990u;
            goto label_111990;
        }
    }
    ctx->pc = 0x111974u;
    // 0x111974: 0x0  nop
    ctx->pc = 0x111974u;
    // NOP
label_111978:
    // 0x111978: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x111978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11197c: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x11197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x111980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111988: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x111988u;
    SET_GPR_U32(ctx, 31, 0x111990u);
    ctx->pc = 0x11198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111988u;
    // 0x11198c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x111988u, 0x111990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111990u;
label_111990:
    // 0x111990: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x111990u;
    {
        const bool branch_taken_0x111990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x111990) {
            ctx->pc = 0x111994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111990u;
            // 0x111994: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1119C8u;
            goto label_1119c8;
        }
    }
    ctx->pc = 0x111998u;
    // 0x111998: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x111998u;
    {
        const bool branch_taken_0x111998 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111998u;
        // 0x11199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111998) {
            ctx->pc = 0x1119B8u;
            goto label_1119b8;
        }
    }
    ctx->pc = 0x1119A0u;
    // 0x1119a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1119a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119a4: 0xc067586  jal         func_19D618
    ctx->pc = 0x1119A4u;
    SET_GPR_U32(ctx, 31, 0x1119ACu);
    ctx->pc = 0x1119A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119A4u;
    // 0x1119a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x1119A4u, 0x1119ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119ACu;
label_1119ac:
    // 0x1119ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1119ACu;
    {
        const bool branch_taken_0x1119ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119ACu;
        // 0x1119b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119ac) {
            ctx->pc = 0x1119C8u;
            goto label_1119c8;
        }
    }
    ctx->pc = 0x1119B4u;
    // 0x1119b4: 0x0  nop
    ctx->pc = 0x1119b4u;
    // NOP
label_1119b8:
    // 0x1119b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1119b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119bc: 0xc067650  jal         func_19D940
    ctx->pc = 0x1119BCu;
    SET_GPR_U32(ctx, 31, 0x1119C4u);
    ctx->pc = 0x1119C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119BCu;
    // 0x1119c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D940u, 0x1119BCu, 0x1119C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119C4u;
label_1119c4:
    // 0x1119c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1119c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1119c8:
    // 0x1119c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1119c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1119cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1119ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1119d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1119d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1119d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1119d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1119d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1119D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1119DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119D8u;
        // 0x1119dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1119D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1119E0u;
}
