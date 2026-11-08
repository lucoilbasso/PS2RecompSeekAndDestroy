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

// Function: entry_0015a218
// Address: 0x15a218 - 0x15a2d8
void entry_0015a218_0x15a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a218_0x15a218");
#endif

    ctx->pc = 0x15a218u;

label_15a218:
    // 0x15a218: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15a21c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15a220: 0x0  nop
    ctx->pc = 0x15a220u;
    // NOP
    // 0x15a224: 0x0  nop
    ctx->pc = 0x15a224u;
    // NOP
    // 0x15a228: 0x0  nop
    ctx->pc = 0x15a228u;
    // NOP
    // 0x15a22c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15A22Cu;
    {
        const bool branch_taken_0x15a22c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A22Cu;
        // 0x15a230: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a22c) {
            ctx->pc = 0x15A218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a218;
        }
    }
    ctx->pc = 0x15A234u;
    // 0x15a234: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15a238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a23c: 0x24c200a0  addiu       $v0, $a2, 0xA0
    ctx->pc = 0x15a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x15a240: 0x24c300e0  addiu       $v1, $a2, 0xE0
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x15a244: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x15a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x15a248: 0xacc00fc8  sw          $zero, 0xFC8($a2)
    ctx->pc = 0x15a248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4040), GPR_U32(ctx, 0));
    // 0x15a24c: 0x24c70170  addiu       $a3, $a2, 0x170
    ctx->pc = 0x15a24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 368));
    // 0x15a250: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x15a250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x15a254: 0x24c50da0  addiu       $a1, $a2, 0xDA0
    ctx->pc = 0x15a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x15a258: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x15a258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x15a25c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15a260: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x15a260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x15a264: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x15a264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x15a268: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x15a268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x15a26c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15a270: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15a270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15a274: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x15a274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x15a278: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x15a278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x15a27c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15a280: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15a280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15a284: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x15a284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x15a288: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x15a288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x15a28c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x15a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x15a290: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x15a290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x15a294: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x15a294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x15a298: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15a298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15a29c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15a2a0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x15a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x15a2a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x15a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x15a2a8: 0xe4c00fc4  swc1        $f0, 0xFC4($a2)
    ctx->pc = 0x15a2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4036), bits); }
    // 0x15a2ac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15a2b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x15a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x15a2b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x15a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x15a2b8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x15a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x15a2bc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15a2c0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x15a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x15a2c4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x15a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x15a2c8: 0xacc00160  sw          $zero, 0x160($a2)
    ctx->pc = 0x15a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 0));
    // 0x15a2cc: 0xacc00164  sw          $zero, 0x164($a2)
    ctx->pc = 0x15a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 356), GPR_U32(ctx, 0));
    // 0x15a2d0: 0xacc00168  sw          $zero, 0x168($a2)
    ctx->pc = 0x15a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 360), GPR_U32(ctx, 0));
    // 0x15a2d4: 0xacc0016c  sw          $zero, 0x16C($a2)
    ctx->pc = 0x15a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 364), GPR_U32(ctx, 0));
    ctx->pc = 0x15a2d8u;
}
