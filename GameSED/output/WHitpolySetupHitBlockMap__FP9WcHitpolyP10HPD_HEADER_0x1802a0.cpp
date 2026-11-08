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

// Function: WHitpolySetupHitBlockMap__FP9WcHitpolyP10HPD_HEADER
// Address: 0x1802a0 - 0x180358
void WHitpolySetupHitBlockMap__FP9WcHitpolyP10HPD_HEADER_0x1802a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySetupHitBlockMap__FP9WcHitpolyP10HPD_HEADER_0x1802a0");
#endif

    switch (ctx->pc) {
        case 0x1802b0u: goto label_1802b0;
        case 0x1802b8u: goto label_1802b8;
        case 0x1802f8u: goto label_1802f8;
        default: break;
    }

    ctx->pc = 0x1802a0u;

    // 0x1802a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1802a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1802a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1802ac: 0x0  nop
    ctx->pc = 0x1802acu;
    // NOP
label_1802b0:
    // 0x1802b0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1802b4: 0x24827f38  addiu       $v0, $a0, 0x7F38
    ctx->pc = 0x1802b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32568));
label_1802b8:
    // 0x1802b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1802b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1802bc: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x1802bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1802c0: 0x0  nop
    ctx->pc = 0x1802c0u;
    // NOP
    // 0x1802c4: 0x0  nop
    ctx->pc = 0x1802c4u;
    // NOP
    // 0x1802c8: 0x0  nop
    ctx->pc = 0x1802c8u;
    // NOP
    // 0x1802cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1802CCu;
    {
        const bool branch_taken_0x1802cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1802D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802CCu;
        // 0x1802d0: 0x2442ff00  addiu       $v0, $v0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802cc) {
            ctx->pc = 0x1802B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802b8;
        }
    }
    ctx->pc = 0x1802D4u;
    // 0x1802d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1802d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1802d8: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x1802d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1802dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1802DCu;
    {
        const bool branch_taken_0x1802dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1802E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802DCu;
        // 0x1802e0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802dc) {
            ctx->pc = 0x1802B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802b0;
        }
    }
    ctx->pc = 0x1802E4u;
    // 0x1802e4: 0x94e20022  lhu         $v0, 0x22($a3)
    ctx->pc = 0x1802e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x1802e8: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1802e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1802ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1802ECu;
    {
        const bool branch_taken_0x1802ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802ECu;
        // 0x1802f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802ec) {
            ctx->pc = 0x180330u;
            goto label_180330;
        }
    }
    ctx->pc = 0x1802F4u;
    // 0x1802f4: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1802f8:
    // 0x1802f8: 0x80820002  lb          $v0, 0x2($a0)
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1802fc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1802fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180300: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x180300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x180304: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x180308: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x180308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x18030c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180310: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180314: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x180318: 0xa4460030  sh          $a2, 0x30($v0)
    ctx->pc = 0x180318u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x18031c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x180320: 0x94e20022  lhu         $v0, 0x22($a3)
    ctx->pc = 0x180320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x180324: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x180324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180328: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x180328u;
    {
        const bool branch_taken_0x180328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180328u;
        // 0x18032c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180328) {
            ctx->pc = 0x1802F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802f8;
        }
    }
    ctx->pc = 0x180330u;
label_180330:
    // 0x180330: 0x94a40026  lhu         $a0, 0x26($a1)
    ctx->pc = 0x180330u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x180334: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x180338: 0x94a50024  lhu         $a1, 0x24($a1)
    ctx->pc = 0x180338u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x18033c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180340: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x180344: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x180344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x180348: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x180348u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18034c: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x18034cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
    // 0x180350: 0x3e00008  jr          $ra
    ctx->pc = 0x180350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180350u;
        // 0x180354: 0xace3002c  sw          $v1, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180358u;
}
