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

// Function: entry_00146d04
// Address: 0x146d04 - 0x146db0
void entry_00146d04_0x146d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146d04_0x146d04");
#endif

    switch (ctx->pc) {
        case 0x146d24u: goto label_146d24;
        default: break;
    }

    ctx->pc = 0x146d04u;

    // 0x146d04: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x146d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x146d08: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x146d08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x146d0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x146d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x146d10: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x146d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x146d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d1c: 0xc061228  jal         func_1848A0
    ctx->pc = 0x146D1Cu;
    SET_GPR_U32(ctx, 31, 0x146D24u);
    ctx->pc = 0x146D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D1Cu;
    // 0x146d20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848A0u, 0x146D1Cu, 0x146D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D24u;
label_146d24:
    // 0x146d24: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x146d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146d28: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x146d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x146d2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x146d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d30: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x146d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x146d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x146d38: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x146d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x146d3c: 0x1101823  subu        $v1, $t0, $s0
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x146d40: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x146d44: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x146d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x146d48: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x146d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x146d4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x146d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x146d50: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x146d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146d54: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x146d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x146d58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146d5c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x146d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d60: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x146d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x146d64: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x146d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x146d68: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x146d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x146d6c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x146d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146d70: 0x240604e2  addiu       $a2, $zero, 0x4E2
    ctx->pc = 0x146d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x146d74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146d7c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x146d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x146d80: 0x55900  sll         $t3, $a1, 4
    ctx->pc = 0x146d80u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x146d84: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x146d84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x146d88: 0x264a0230  addiu       $t2, $s2, 0x230
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x146d8c: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x146d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x146d90: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146d94: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x146d94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x146d98: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x146d9c: 0x240fff80  addiu       $t7, $zero, -0x80
    ctx->pc = 0x146d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x146da0: 0x27ae00c0  addiu       $t6, $sp, 0xC0
    ctx->pc = 0x146da0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146da4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146da8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x146da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146dac: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x146db0u;
}
