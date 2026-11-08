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

// Function: entry_0017cc10
// Address: 0x17cc10 - 0x17ccb8
void entry_0017cc10_0x17cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cc10_0x17cc10");
#endif

    switch (ctx->pc) {
        case 0x17cc40u: goto label_17cc40;
        case 0x17cc4cu: goto label_17cc4c;
        case 0x17cc58u: goto label_17cc58;
        case 0x17ccacu: goto label_17ccac;
        default: break;
    }

    ctx->pc = 0x17cc10u;

    // 0x17cc10: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17cc14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc18: 0x30510001  andi        $s1, $v0, 0x1
    ctx->pc = 0x17cc18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17cc1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17cc20: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x17CC20u;
    {
        const bool branch_taken_0x17cc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC20u;
        // 0x17cc24: 0x73ac2  srl         $a3, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc20) {
            ctx->pc = 0x17CCB8u;
            return;
        }
    }
    ctx->pc = 0x17CC28u;
    // 0x17cc28: 0x3c090018  lui         $t1, 0x18
    ctx->pc = 0x17cc28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24 << 16));
    // 0x17cc2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17cc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc30: 0x2529d018  addiu       $t1, $t1, -0x2FE8
    ctx->pc = 0x17cc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955032));
    // 0x17cc34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17cc34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc38: 0xc05e31a  jal         func_178C68
    ctx->pc = 0x17CC38u;
    SET_GPR_U32(ctx, 31, 0x17CC40u);
    ctx->pc = 0x17CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC38u;
    // 0x17cc3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C68u, 0x17CC38u, 0x17CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CC40u;
label_17cc40:
    // 0x17cc40: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17cc44: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17CC44u;
    SET_GPR_U32(ctx, 31, 0x17CC4Cu);
    ctx->pc = 0x17CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC44u;
    // 0x17cc48: 0x24847b90  addiu       $a0, $a0, 0x7B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17CC44u, 0x17CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CC4Cu;
label_17cc4c:
    // 0x17cc4c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17cc50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17CC50u;
    SET_GPR_U32(ctx, 31, 0x17CC58u);
    ctx->pc = 0x17CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC50u;
    // 0x17cc54: 0xafb0004c  sw          $s0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17CC50u, 0x17CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CC58u;
label_17cc58:
    // 0x17cc58: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cc5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17cc60: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x17cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17cc64: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17cc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17cc68: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x17cc68u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x17cc6c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x17cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x17cc70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc74: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x17cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x17cc78: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cc7c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cc80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x17cc84: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cc88: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cc8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cc90: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x17cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x17cc94: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x17cc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17cc98: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x17cc98u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17cc9c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cca0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cca4: 0xc05e0e6  jal         func_178398
    ctx->pc = 0x17CCA4u;
    SET_GPR_U32(ctx, 31, 0x17CCACu);
    ctx->pc = 0x178398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178398u, 0x17CCA4u, 0x17CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCACu;
label_17ccac:
    // 0x17ccac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17CCACu;
    {
        const bool branch_taken_0x17ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCACu;
        // 0x17ccb0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccac) {
            ctx->pc = 0x17CCCCu;
            return;
        }
    }
    ctx->pc = 0x17CCB4u;
    // 0x17ccb4: 0x0  nop
    ctx->pc = 0x17ccb4u;
    // NOP
    ctx->pc = 0x17ccb8u;
}
