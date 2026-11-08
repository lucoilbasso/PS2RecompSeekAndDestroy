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

// Function: entry_001988d8
// Address: 0x1988d8 - 0x198994
void entry_001988d8_0x1988d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001988d8_0x1988d8");
#endif

    switch (ctx->pc) {
        case 0x198988u: goto label_198988;
        default: break;
    }

    ctx->pc = 0x1988d8u;

    // 0x1988d8: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1988d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1988dc: 0x3463130d  ori         $v1, $v1, 0x130D
    ctx->pc = 0x1988dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4877);
    // 0x1988e0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1988e4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1988e8: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x1988ec: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1988ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1988f0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1988f4: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1988f8: 0x27868c90  addiu       $a2, $gp, -0x7370
    ctx->pc = 0x1988f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x1988fc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1988fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198900: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x198900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198904: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x198904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x198908: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x19890c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x19890cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x198910: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198914: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x198914u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x198918: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x198918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19891c: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x19891cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x198920: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x198920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198924: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x198928: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x198928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x19892c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x19892cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198930: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x198930u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x198934: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x198938: 0xeb3823  subu        $a3, $a3, $t3
    ctx->pc = 0x198938u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x19893c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x19893cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x198940: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198944: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x198948: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19894c: 0xfd280008  sd          $t0, 0x8($t1)
    ctx->pc = 0x19894cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 8));
    // 0x198950: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x198950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x198954: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x198958: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19895c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x19895cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x198960: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x198960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x198964: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x198964u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x198968: 0xfd650008  sd          $a1, 0x8($t3)
    ctx->pc = 0x198968u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 5));
    // 0x19896c: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x19896cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x198970: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x198974: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x198974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x198978: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198978u;
    {
        const bool branch_taken_0x198978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198978u;
        // 0x19897c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198978) {
            ctx->pc = 0x198994u;
            return;
        }
    }
    ctx->pc = 0x198980u;
    // 0x198980: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198980u;
    SET_GPR_U32(ctx, 31, 0x198988u);
    ctx->pc = 0x198984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198980u;
    // 0x198984: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198980u, 0x198988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198988u;
label_198988:
    // 0x198988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19898c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x19898Cu;
    SET_GPR_U32(ctx, 31, 0x198994u);
    ctx->pc = 0x198990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19898Cu;
    // 0x198990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x19898Cu, 0x198994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198994u;
}
