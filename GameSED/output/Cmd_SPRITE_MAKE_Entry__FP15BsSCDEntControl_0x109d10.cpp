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

// Function: Cmd_SPRITE_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x109d10 - 0x109edc
void Cmd_SPRITE_MAKE_Entry__FP15BsSCDEntControl_0x109d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_MAKE_Entry__FP15BsSCDEntControl_0x109d10");
#endif

    switch (ctx->pc) {
        case 0x109d38u: goto label_109d38;
        case 0x109da4u: goto label_109da4;
        case 0x109dc0u: goto label_109dc0;
        case 0x109df8u: goto label_109df8;
        case 0x109e0cu: goto label_109e0c;
        case 0x109e78u: goto label_109e78;
        case 0x109e80u: goto label_109e80;
        case 0x109ea4u: goto label_109ea4;
        case 0x109eb0u: goto label_109eb0;
        case 0x109ec0u: goto label_109ec0;
        default: break;
    }

    ctx->pc = 0x109d10u;

    // 0x109d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x109d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x109d14: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x109d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x109d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d1c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x109d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x109d20: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x109d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x109d24: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x109d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x109d28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x109d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x109d2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109d30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109D30u;
    SET_GPR_U32(ctx, 31, 0x109D38u);
    ctx->pc = 0x109D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D30u;
    // 0x109d34: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109D30u, 0x109D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D38u;
label_109d38:
    // 0x109d38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d3c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x109d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x109d40: 0x244bb000  addiu       $t3, $v0, -0x5000
    ctx->pc = 0x109d40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x109d44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109d48: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x109d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x109d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d50: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x109d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x109d54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x109d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109d58: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x109D58u;
    {
        const bool branch_taken_0x109d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D58u;
        // 0x109d5c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d58) {
            ctx->pc = 0x109DD8u;
            goto label_109dd8;
        }
    }
    ctx->pc = 0x109D60u;
    // 0x109d60: 0xdd6c0038  ld          $t4, 0x38($t3)
    ctx->pc = 0x109d60u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x109d64: 0xdd620000  ld          $v0, 0x0($t3)
    ctx->pc = 0x109d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x109d68: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x109d68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x109d6c: 0xdd670010  ld          $a3, 0x10($t3)
    ctx->pc = 0x109d6cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x109d70: 0xdd680018  ld          $t0, 0x18($t3)
    ctx->pc = 0x109d70u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x109d74: 0xdd690020  ld          $t1, 0x20($t3)
    ctx->pc = 0x109d74u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x109d78: 0xdd6a0028  ld          $t2, 0x28($t3)
    ctx->pc = 0x109d78u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x109d7c: 0xdd6b0030  ld          $t3, 0x30($t3)
    ctx->pc = 0x109d7cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x109d80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x109d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x109d84: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x109d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x109d88: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x109d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    // 0x109d8c: 0xffa80018  sd          $t0, 0x18($sp)
    ctx->pc = 0x109d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
    // 0x109d90: 0xffa90020  sd          $t1, 0x20($sp)
    ctx->pc = 0x109d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 9));
    // 0x109d94: 0xffaa0028  sd          $t2, 0x28($sp)
    ctx->pc = 0x109d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 10));
    // 0x109d98: 0xffab0030  sd          $t3, 0x30($sp)
    ctx->pc = 0x109d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 11));
    // 0x109d9c: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x109D9Cu;
    SET_GPR_U32(ctx, 31, 0x109DA4u);
    ctx->pc = 0x109DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D9Cu;
    // 0x109da0: 0xffac0038  sd          $t4, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x109D9Cu, 0x109DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DA4u;
label_109da4:
    // 0x109da4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x109da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x109da8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109dac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109db0: 0x1065002e  beq         $v1, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x109DB0u;
    {
        const bool branch_taken_0x109db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x109DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DB0u;
        // 0x109db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109db0) {
            ctx->pc = 0x109E6Cu;
            goto label_109e6c;
        }
    }
    ctx->pc = 0x109DB8u;
    // 0x109db8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109DB8u;
    SET_GPR_U32(ctx, 31, 0x109DC0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109DB8u, 0x109DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DC0u;
label_109dc0:
    // 0x109dc0: 0x97a4000e  lhu         $a0, 0xE($sp)
    ctx->pc = 0x109dc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x109dc4: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x109dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109dc8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x109dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109dcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109dd0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x109DD0u;
    {
        const bool branch_taken_0x109dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DD0u;
        // 0x109dd4: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dd0) {
            ctx->pc = 0x109E6Cu;
            goto label_109e6c;
        }
    }
    ctx->pc = 0x109DD8u;
label_109dd8:
    // 0x109dd8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109ddc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109de0: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x109DE0u;
    {
        const bool branch_taken_0x109de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x109DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DE0u;
        // 0x109de4: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109de0) {
            ctx->pc = 0x109E18u;
            goto label_109e18;
        }
    }
    ctx->pc = 0x109DE8u;
    // 0x109de8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109df0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109DF0u;
    SET_GPR_U32(ctx, 31, 0x109DF8u);
    ctx->pc = 0x109DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DF0u;
    // 0x109df4: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109DF0u, 0x109DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DF8u;
label_109df8:
    // 0x109df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e04: 0xc040438  jal         func_1010E0
    ctx->pc = 0x109E04u;
    SET_GPR_U32(ctx, 31, 0x109E0Cu);
    ctx->pc = 0x109E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E04u;
    // 0x109e08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010E0u, 0x109E04u, 0x109E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E0Cu;
label_109e0c:
    // 0x109e0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x109E0Cu;
    {
        const bool branch_taken_0x109e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E0Cu;
        // 0x109e10: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e0c) {
            ctx->pc = 0x109E60u;
            goto label_109e60;
        }
    }
    ctx->pc = 0x109E14u;
    // 0x109e14: 0x0  nop
    ctx->pc = 0x109e14u;
    // NOP
label_109e18:
    // 0x109e18: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x109e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x109e1c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x109e1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109e20: 0xdc490038  ld          $t1, 0x38($v0)
    ctx->pc = 0x109e20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x109e24: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x109e24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x109e28: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x109e28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x109e2c: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x109e2cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x109e30: 0xdc470028  ld          $a3, 0x28($v0)
    ctx->pc = 0x109e30u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x109e34: 0xdc480030  ld          $t0, 0x30($v0)
    ctx->pc = 0x109e34u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x109e38: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x109e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x109e3c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x109e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x109e40: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x109e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x109e44: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x109e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x109e48: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x109e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x109e4c: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x109e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x109e50: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x109e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x109e54: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x109e54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x109e58: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x109e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x109e5c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x109e5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109e60:
    // 0x109e60: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x109e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x109e64: 0xa7a00040  sh          $zero, 0x40($sp)
    ctx->pc = 0x109e64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x109e68: 0xa7a00042  sh          $zero, 0x42($sp)
    ctx->pc = 0x109e68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
label_109e6c:
    // 0x109e6c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x109e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x109e70: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x109E70u;
    SET_GPR_U32(ctx, 31, 0x109E78u);
    ctx->pc = 0x109E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E70u;
    // 0x109e74: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x109E70u, 0x109E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E78u;
label_109e78:
    // 0x109e78: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x109E78u;
    SET_GPR_U32(ctx, 31, 0x109E80u);
    ctx->pc = 0x109E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E78u;
    // 0x109e7c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x109E78u, 0x109E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E80u;
label_109e80:
    // 0x109e80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x109e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x109e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x109e8c: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x109e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x109e90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x109e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x109e98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e9c: 0xc062cb0  jal         func_18B2C0
    ctx->pc = 0x109E9Cu;
    SET_GPR_U32(ctx, 31, 0x109EA4u);
    ctx->pc = 0x109EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E9Cu;
    // 0x109ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x109E9Cu, 0x109EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EA4u;
label_109ea4:
    // 0x109ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ea8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x109EA8u;
    SET_GPR_U32(ctx, 31, 0x109EB0u);
    ctx->pc = 0x109EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EA8u;
    // 0x109eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x109EA8u, 0x109EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EB0u;
label_109eb0:
    // 0x109eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x109EB8u;
    SET_GPR_U32(ctx, 31, 0x109EC0u);
    ctx->pc = 0x109EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EB8u;
    // 0x109ebc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x109EB8u, 0x109EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EC0u;
label_109ec0:
    // 0x109ec0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x109ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109ec4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x109ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x109ec8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109ecc: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x109eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x109ed0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x109ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x109ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED4u;
        // 0x109ed8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109EDCu;
}
