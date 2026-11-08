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

// Function: entry_00160f20
// Address: 0x160f20 - 0x16102c
void entry_00160f20_0x160f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160f20_0x160f20");
#endif

    ctx->pc = 0x160f20u;

label_160f20:
    // 0x160f20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x160f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x160f24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x160f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x160f28: 0x0  nop
    ctx->pc = 0x160f28u;
    // NOP
    // 0x160f2c: 0x0  nop
    ctx->pc = 0x160f2cu;
    // NOP
    // 0x160f30: 0x0  nop
    ctx->pc = 0x160f30u;
    // NOP
    // 0x160f34: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160F34u;
    {
        const bool branch_taken_0x160f34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x160F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F34u;
        // 0x160f38: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f34) {
            ctx->pc = 0x160F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160f20;
        }
    }
    ctx->pc = 0x160F3Cu;
    // 0x160f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x160f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x160f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f44: 0x26031a60  addiu       $v1, $s0, 0x1A60
    ctx->pc = 0x160f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6752));
    // 0x160f48: 0x260519c0  addiu       $a1, $s0, 0x19C0
    ctx->pc = 0x160f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6592));
    // 0x160f4c: 0x260211b0  addiu       $v0, $s0, 0x11B0
    ctx->pc = 0x160f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4528));
    // 0x160f50: 0x260419e4  addiu       $a0, $s0, 0x19E4
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6628));
    // 0x160f54: 0x260619f0  addiu       $a2, $s0, 0x19F0
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6640));
    // 0x160f58: 0x260719fc  addiu       $a3, $s0, 0x19FC
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 6652));
    // 0x160f5c: 0x26081a08  addiu       $t0, $s0, 0x1A08
    ctx->pc = 0x160f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 6664));
    // 0x160f60: 0x26091a14  addiu       $t1, $s0, 0x1A14
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 6676));
    // 0x160f64: 0x260a1a20  addiu       $t2, $s0, 0x1A20
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 6688));
    // 0x160f68: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x160f68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160f6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x160f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x160f70: 0xae000cc4  sw          $zero, 0xCC4($s0)
    ctx->pc = 0x160f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3268), GPR_U32(ctx, 0));
    // 0x160f74: 0x260c1a80  addiu       $t4, $s0, 0x1A80
    ctx->pc = 0x160f74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 6784));
    // 0x160f78: 0xae000cc8  sw          $zero, 0xCC8($s0)
    ctx->pc = 0x160f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3272), GPR_U32(ctx, 0));
    // 0x160f7c: 0xae000ccc  sw          $zero, 0xCCC($s0)
    ctx->pc = 0x160f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3276), GPR_U32(ctx, 0));
    // 0x160f80: 0xae000cf0  sw          $zero, 0xCF0($s0)
    ctx->pc = 0x160f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3312), GPR_U32(ctx, 0));
    // 0x160f84: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x160f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x160f88: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x160f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x160f8c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x160f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x160f90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x160f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x160f94: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x160f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x160f98: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x160f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x160f9c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x160f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x160fa0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x160fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x160fa4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x160fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x160fa8: 0xae000d74  sw          $zero, 0xD74($s0)
    ctx->pc = 0x160fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3444), GPR_U32(ctx, 0));
    // 0x160fac: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x160facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x160fb0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x160fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x160fb4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x160fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x160fb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x160fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x160fbc: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x160fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x160fc0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x160fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x160fc4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x160fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x160fc8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x160fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x160fcc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x160fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x160fd0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x160fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x160fd4: 0xe6001ac4  swc1        $f0, 0x1AC4($s0)
    ctx->pc = 0x160fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6852), bits); }
    // 0x160fd8: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x160fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x160fdc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x160fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x160fe0: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x160fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x160fe4: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x160fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x160fe8: 0xae001a2c  sw          $zero, 0x1A2C($s0)
    ctx->pc = 0x160fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6700), GPR_U32(ctx, 0));
    // 0x160fec: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x160fecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x160ff0: 0xe6001ac0  swc1        $f0, 0x1AC0($s0)
    ctx->pc = 0x160ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6848), bits); }
    // 0x160ff4: 0xae001ac8  sw          $zero, 0x1AC8($s0)
    ctx->pc = 0x160ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6856), GPR_U32(ctx, 0));
    // 0x160ff8: 0xae001acc  sw          $zero, 0x1ACC($s0)
    ctx->pc = 0x160ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6860), GPR_U32(ctx, 0));
    // 0x160ffc: 0xae001ad0  sw          $zero, 0x1AD0($s0)
    ctx->pc = 0x160ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6864), GPR_U32(ctx, 0));
    // 0x161000: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x161000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x161004: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x161004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x161008: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x161008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x16100c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x16100cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x161010: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x161010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x161014: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x161014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x161018: 0xf9800000  sqc2        $vf0, 0x0($t4)
    ctx->pc = 0x161018u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16101c: 0x26021a90  addiu       $v0, $s0, 0x1A90
    ctx->pc = 0x16101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6800));
    // 0x161020: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x161020u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x161024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161028: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x16102cu;
}
