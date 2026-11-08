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

// Function: Init__7ApcWponP8ApcRsc3DP9ApcSCDEntiP7WcActorP12ApcWponParam
// Address: 0x156ec0 - 0x157010
void Init__7ApcWponP8ApcRsc3DP9ApcSCDEntiP7WcActorP12ApcWponParam_0x156ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7ApcWponP8ApcRsc3DP9ApcSCDEntiP7WcActorP12ApcWponParam_0x156ec0");
#endif

    switch (ctx->pc) {
        case 0x156ec0u: goto label_156ec0;
        case 0x156ec4u: goto label_156ec4;
        case 0x156ec8u: goto label_156ec8;
        case 0x156eccu: goto label_156ecc;
        case 0x156ed0u: goto label_156ed0;
        case 0x156ed4u: goto label_156ed4;
        case 0x156ed8u: goto label_156ed8;
        case 0x156edcu: goto label_156edc;
        case 0x156ee0u: goto label_156ee0;
        case 0x156ee4u: goto label_156ee4;
        case 0x156ee8u: goto label_156ee8;
        case 0x156eecu: goto label_156eec;
        case 0x156ef0u: goto label_156ef0;
        case 0x156ef4u: goto label_156ef4;
        case 0x156ef8u: goto label_156ef8;
        case 0x156efcu: goto label_156efc;
        case 0x156f00u: goto label_156f00;
        case 0x156f04u: goto label_156f04;
        case 0x156f08u: goto label_156f08;
        case 0x156f0cu: goto label_156f0c;
        case 0x156f10u: goto label_156f10;
        case 0x156f14u: goto label_156f14;
        case 0x156f18u: goto label_156f18;
        case 0x156f1cu: goto label_156f1c;
        case 0x156f20u: goto label_156f20;
        case 0x156f24u: goto label_156f24;
        case 0x156f28u: goto label_156f28;
        case 0x156f2cu: goto label_156f2c;
        case 0x156f30u: goto label_156f30;
        case 0x156f34u: goto label_156f34;
        case 0x156f38u: goto label_156f38;
        case 0x156f3cu: goto label_156f3c;
        case 0x156f40u: goto label_156f40;
        case 0x156f44u: goto label_156f44;
        case 0x156f48u: goto label_156f48;
        case 0x156f4cu: goto label_156f4c;
        case 0x156f50u: goto label_156f50;
        case 0x156f54u: goto label_156f54;
        case 0x156f58u: goto label_156f58;
        case 0x156f5cu: goto label_156f5c;
        case 0x156f60u: goto label_156f60;
        case 0x156f64u: goto label_156f64;
        case 0x156f68u: goto label_156f68;
        case 0x156f6cu: goto label_156f6c;
        case 0x156f70u: goto label_156f70;
        case 0x156f74u: goto label_156f74;
        case 0x156f78u: goto label_156f78;
        case 0x156f7cu: goto label_156f7c;
        case 0x156f80u: goto label_156f80;
        case 0x156f84u: goto label_156f84;
        case 0x156f88u: goto label_156f88;
        case 0x156f8cu: goto label_156f8c;
        case 0x156f90u: goto label_156f90;
        case 0x156f94u: goto label_156f94;
        case 0x156f98u: goto label_156f98;
        case 0x156f9cu: goto label_156f9c;
        case 0x156fa0u: goto label_156fa0;
        case 0x156fa4u: goto label_156fa4;
        case 0x156fa8u: goto label_156fa8;
        case 0x156facu: goto label_156fac;
        case 0x156fb0u: goto label_156fb0;
        case 0x156fb4u: goto label_156fb4;
        case 0x156fb8u: goto label_156fb8;
        case 0x156fbcu: goto label_156fbc;
        case 0x156fc0u: goto label_156fc0;
        case 0x156fc4u: goto label_156fc4;
        case 0x156fc8u: goto label_156fc8;
        case 0x156fccu: goto label_156fcc;
        case 0x156fd0u: goto label_156fd0;
        case 0x156fd4u: goto label_156fd4;
        case 0x156fd8u: goto label_156fd8;
        case 0x156fdcu: goto label_156fdc;
        case 0x156fe0u: goto label_156fe0;
        case 0x156fe4u: goto label_156fe4;
        case 0x156fe8u: goto label_156fe8;
        case 0x156fecu: goto label_156fec;
        case 0x156ff0u: goto label_156ff0;
        case 0x156ff4u: goto label_156ff4;
        case 0x156ff8u: goto label_156ff8;
        case 0x156ffcu: goto label_156ffc;
        case 0x157000u: goto label_157000;
        case 0x157004u: goto label_157004;
        case 0x157008u: goto label_157008;
        case 0x15700cu: goto label_15700c;
        default: break;
    }

    ctx->pc = 0x156ec0u;

label_156ec0:
    // 0x156ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_156ec4:
    // 0x156ec4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_156ec8:
    // 0x156ec8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x156ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_156ecc:
    // 0x156ecc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x156eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_156ed0:
    // 0x156ed0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x156ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_156ed4:
    // 0x156ed4: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x156ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_156ed8:
    // 0x156ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156edc:
    // 0x156edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_156ee0:
    // 0x156ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156ee4:
    // 0x156ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_156ee8:
    // 0x156ee8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x156ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_156eec:
    // 0x156eec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_156ef0:
    // 0x156ef0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x156ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_156ef4:
    // 0x156ef4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x156ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_156ef8:
    // 0x156ef8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_156efc:
    // 0x156efc: 0xc0529f0  jal         func_14A7C0
label_156f00:
    if (ctx->pc == 0x156F00u) {
        ctx->pc = 0x156F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EFCu;
        // 0x156f00: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F04u;
        goto label_156f04;
    }
    ctx->pc = 0x156EFCu;
    SET_GPR_U32(ctx, 31, 0x156F04u);
    ctx->pc = 0x156F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EFCu;
    // 0x156f00: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x156EFCu, 0x156F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F04u;
label_156f04:
    // 0x156f04: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x156f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
label_156f08:
    // 0x156f08: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x156f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
label_156f0c:
    // 0x156f0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_156f10:
    // 0x156f10: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x156f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_156f14:
    // 0x156f14: 0xa6000266  sh          $zero, 0x266($s0)
    ctx->pc = 0x156f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 0));
label_156f18:
    // 0x156f18: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x156f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_156f1c:
    // 0x156f1c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x156f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_156f20:
    // 0x156f20: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_156f24:
    if (ctx->pc == 0x156F24u) {
        ctx->pc = 0x156F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F20u;
        // 0x156f24: 0xa6130264  sh          $s3, 0x264($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 612), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F28u;
        goto label_156f28;
    }
    ctx->pc = 0x156F20u;
    {
        const bool branch_taken_0x156f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F20u;
        // 0x156f24: 0xa6130264  sh          $s3, 0x264($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 612), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f20) {
            ctx->pc = 0x156F84u;
            goto label_156f84;
        }
    }
    ctx->pc = 0x156F28u;
label_156f28:
    // 0x156f28: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x156f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_156f2c:
    // 0x156f2c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_156f30:
    if (ctx->pc == 0x156F30u) {
        ctx->pc = 0x156F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F2Cu;
        // 0x156f30: 0xae110260  sw          $s1, 0x260($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F34u;
        goto label_156f34;
    }
    ctx->pc = 0x156F2Cu;
    {
        const bool branch_taken_0x156f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156f2c) {
            ctx->pc = 0x156F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156F2Cu;
            // 0x156f30: 0xae110260  sw          $s1, 0x260($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156F3Cu;
            goto label_156f3c;
        }
    }
    ctx->pc = 0x156F34u;
label_156f34:
    // 0x156f34: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_156f38:
    // 0x156f38: 0xae020260  sw          $v0, 0x260($s0)
    ctx->pc = 0x156f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
label_156f3c:
    // 0x156f3c: 0x8e050260  lw          $a1, 0x260($s0)
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_156f40:
    // 0x156f40: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_156f44:
    if (ctx->pc == 0x156F44u) {
        ctx->pc = 0x156F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F40u;
        // 0x156f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F48u;
        goto label_156f48;
    }
    ctx->pc = 0x156F40u;
    {
        const bool branch_taken_0x156f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F40u;
        // 0x156f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f40) {
            ctx->pc = 0x156F84u;
            goto label_156f84;
        }
    }
    ctx->pc = 0x156F48u;
label_156f48:
    // 0x156f48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156f4c:
    // 0x156f4c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x156f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_156f50:
    // 0x156f50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_156f54:
    // 0x156f54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x156f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_156f58:
    // 0x156f58: 0x60f809  jalr        $v1
label_156f5c:
    if (ctx->pc == 0x156F5Cu) {
        ctx->pc = 0x156F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F58u;
        // 0x156f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F60u;
        goto label_156f60;
    }
    ctx->pc = 0x156F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156F60u);
        ctx->pc = 0x156F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F58u;
        // 0x156f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156F58u, 0x156F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156F60u;
label_156f60:
    // 0x156f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156f64:
    // 0x156f64: 0xc052f32  jal         func_14BCC8
label_156f68:
    if (ctx->pc == 0x156F68u) {
        ctx->pc = 0x156F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F64u;
        // 0x156f68: 0x8e050260  lw          $a1, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F6Cu;
        goto label_156f6c;
    }
    ctx->pc = 0x156F64u;
    SET_GPR_U32(ctx, 31, 0x156F6Cu);
    ctx->pc = 0x156F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F64u;
    // 0x156f68: 0x8e050260  lw          $a1, 0x260($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x156F64u, 0x156F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F6Cu;
label_156f6c:
    // 0x156f6c: 0x96020238  lhu         $v0, 0x238($s0)
    ctx->pc = 0x156f6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
label_156f70:
    // 0x156f70: 0x9603023a  lhu         $v1, 0x23A($s0)
    ctx->pc = 0x156f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
label_156f74:
    // 0x156f74: 0x8e04023c  lw          $a0, 0x23C($s0)
    ctx->pc = 0x156f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_156f78:
    // 0x156f78: 0xa6020284  sh          $v0, 0x284($s0)
    ctx->pc = 0x156f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 644), (uint16_t)GPR_U32(ctx, 2));
label_156f7c:
    // 0x156f7c: 0xa6030286  sh          $v1, 0x286($s0)
    ctx->pc = 0x156f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 646), (uint16_t)GPR_U32(ctx, 3));
label_156f80:
    // 0x156f80: 0xae040280  sw          $a0, 0x280($s0)
    ctx->pc = 0x156f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 4));
label_156f84:
    // 0x156f84: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_156f88:
    if (ctx->pc == 0x156F88u) {
        ctx->pc = 0x156F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F84u;
        // 0x156f88: 0x36623000  ori         $v0, $s3, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F8Cu;
        goto label_156f8c;
    }
    ctx->pc = 0x156F84u;
    {
        const bool branch_taken_0x156f84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F84u;
        // 0x156f88: 0x36623000  ori         $v0, $s3, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f84) {
            ctx->pc = 0x156FA0u;
            goto label_156fa0;
        }
    }
    ctx->pc = 0x156F8Cu;
label_156f8c:
    // 0x156f8c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x156f8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_156f90:
    // 0x156f90: 0xfe020270  sd          $v0, 0x270($s0)
    ctx->pc = 0x156f90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 624), GPR_U64(ctx, 2));
label_156f94:
    // 0x156f94: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_156f98:
    // 0x156f98: 0xfe030278  sd          $v1, 0x278($s0)
    ctx->pc = 0x156f98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 632), GPR_U64(ctx, 3));
label_156f9c:
    // 0x156f9c: 0x36623000  ori         $v0, $s3, 0x3000
    ctx->pc = 0x156f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)12288);
label_156fa0:
    // 0x156fa0: 0x6600012  bltz        $s3, . + 4 + (0x12 << 2)
label_156fa4:
    if (ctx->pc == 0x156FA4u) {
        ctx->pc = 0x156FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA0u;
        // 0x156fa4: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FA8u;
        goto label_156fa8;
    }
    ctx->pc = 0x156FA0u;
    {
        const bool branch_taken_0x156fa0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x156FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA0u;
        // 0x156fa4: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fa0) {
            ctx->pc = 0x156FECu;
            goto label_156fec;
        }
    }
    ctx->pc = 0x156FA8u;
label_156fa8:
    // 0x156fa8: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_156fac:
    if (ctx->pc == 0x156FACu) {
        ctx->pc = 0x156FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA8u;
        // 0x156fac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FB0u;
        goto label_156fb0;
    }
    ctx->pc = 0x156FA8u;
    {
        const bool branch_taken_0x156fa8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x156fa8) {
            ctx->pc = 0x156FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156FA8u;
            // 0x156fac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156FC4u;
            goto label_156fc4;
        }
    }
    ctx->pc = 0x156FB0u;
label_156fb0:
    // 0x156fb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x156fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_156fb4:
    // 0x156fb4: 0xc04e346  jal         func_138D18
label_156fb8:
    if (ctx->pc == 0x156FB8u) {
        ctx->pc = 0x156FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FB4u;
        // 0x156fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FBCu;
        goto label_156fbc;
    }
    ctx->pc = 0x156FB4u;
    SET_GPR_U32(ctx, 31, 0x156FBCu);
    ctx->pc = 0x156FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FB4u;
    // 0x156fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D18u, 0x156FB4u, 0x156FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FBCu;
label_156fbc:
    // 0x156fbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x156fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156fc0:
    // 0x156fc0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156fc4:
    // 0x156fc4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_156fc8:
    // 0x156fc8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_156fcc:
    // 0x156fcc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x156fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_156fd0:
    // 0x156fd0: 0x84c6a120  lh          $a2, -0x5EE0($a2)
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294943008)));
label_156fd4:
    // 0x156fd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x156fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_156fd8:
    // 0x156fd8: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_156fdc:
    // 0x156fdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_156fe0:
    // 0x156fe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x156fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_156fe4:
    // 0x156fe4: 0x40f809  jalr        $v0
label_156fe8:
    if (ctx->pc == 0x156FE8u) {
        ctx->pc = 0x156FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE4u;
        // 0x156fe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FECu;
        goto label_156fec;
    }
    ctx->pc = 0x156FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156FECu);
        ctx->pc = 0x156FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE4u;
        // 0x156fe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156FE4u, 0x156FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156FECu;
label_156fec:
    // 0x156fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156ff0:
    // 0x156ff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_156ff4:
    // 0x156ff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156ff8:
    // 0x156ff8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_156ffc:
    // 0x156ffc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x156ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_157000:
    // 0x157000: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x157000u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_157004:
    // 0x157004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x157004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_157008:
    // 0x157008: 0x3e00008  jr          $ra
label_15700c:
    if (ctx->pc == 0x15700Cu) {
        ctx->pc = 0x15700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157008u;
        // 0x15700c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157010u;
        goto label_fallthrough_0x157008;
    }
    ctx->pc = 0x157008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157008u;
        // 0x15700c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157008:
    ctx->pc = 0x157010u;
}
