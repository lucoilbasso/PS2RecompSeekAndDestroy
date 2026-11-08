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

// Function: entry_00164da0
// Address: 0x164da0 - 0x164e78
void entry_00164da0_0x164da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164da0_0x164da0");
#endif

    ctx->pc = 0x164da0u;

label_164da0:
    // 0x164da0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164da4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x164da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x164da8: 0x0  nop
    ctx->pc = 0x164da8u;
    // NOP
    // 0x164dac: 0x0  nop
    ctx->pc = 0x164dacu;
    // NOP
    // 0x164db0: 0x0  nop
    ctx->pc = 0x164db0u;
    // NOP
    // 0x164db4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x164DB4u;
    {
        const bool branch_taken_0x164db4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x164DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DB4u;
        // 0x164db8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164db4) {
            ctx->pc = 0x164DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164da0;
        }
    }
    ctx->pc = 0x164DBCu;
    // 0x164dbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164dc0: 0x2604111c  addiu       $a0, $s0, 0x111C
    ctx->pc = 0x164dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x164dc4: 0x260310fc  addiu       $v1, $s0, 0x10FC
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
    // 0x164dc8: 0x26051200  addiu       $a1, $s0, 0x1200
    ctx->pc = 0x164dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x164dcc: 0x2606120c  addiu       $a2, $s0, 0x120C
    ctx->pc = 0x164dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4620));
    // 0x164dd0: 0x26071218  addiu       $a3, $s0, 0x1218
    ctx->pc = 0x164dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4632));
    // 0x164dd4: 0x26081224  addiu       $t0, $s0, 0x1224
    ctx->pc = 0x164dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4644));
    // 0x164dd8: 0xae001260  sw          $zero, 0x1260($s0)
    ctx->pc = 0x164dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
    // 0x164ddc: 0xae020c98  sw          $v0, 0xC98($s0)
    ctx->pc = 0x164ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3224), GPR_U32(ctx, 2));
    // 0x164de0: 0x26091240  addiu       $t1, $s0, 0x1240
    ctx->pc = 0x164de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4672));
    // 0x164de4: 0xae020c9c  sw          $v0, 0xC9C($s0)
    ctx->pc = 0x164de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3228), GPR_U32(ctx, 2));
    // 0x164de8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164dec: 0xae020ca0  sw          $v0, 0xCA0($s0)
    ctx->pc = 0x164decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3232), GPR_U32(ctx, 2));
    // 0x164df0: 0xae020c1c  sw          $v0, 0xC1C($s0)
    ctx->pc = 0x164df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3100), GPR_U32(ctx, 2));
    // 0x164df4: 0xae020cb4  sw          $v0, 0xCB4($s0)
    ctx->pc = 0x164df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3252), GPR_U32(ctx, 2));
    // 0x164df8: 0xae020cc0  sw          $v0, 0xCC0($s0)
    ctx->pc = 0x164df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3264), GPR_U32(ctx, 2));
    // 0x164dfc: 0xae020ca4  sw          $v0, 0xCA4($s0)
    ctx->pc = 0x164dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3236), GPR_U32(ctx, 2));
    // 0x164e00: 0xae000ccc  sw          $zero, 0xCCC($s0)
    ctx->pc = 0x164e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3276), GPR_U32(ctx, 0));
    // 0x164e04: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x164e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x164e08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x164e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x164e0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x164e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x164e10: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x164e14: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x164e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x164e18: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x164e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x164e1c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x164e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x164e20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x164e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x164e24: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x164e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x164e28: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x164e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x164e2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x164e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x164e30: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x164e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x164e34: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x164e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x164e38: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x164e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x164e3c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x164e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x164e40: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x164e40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x164e44: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x164e44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x164e48: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x164e48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x164e4c: 0xae001264  sw          $zero, 0x1264($s0)
    ctx->pc = 0x164e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4708), GPR_U32(ctx, 0));
    // 0x164e50: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x164e50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x164e54: 0xae0011c0  sw          $zero, 0x11C0($s0)
    ctx->pc = 0x164e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 0));
    // 0x164e58: 0xae0011e0  sw          $zero, 0x11E0($s0)
    ctx->pc = 0x164e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4576), GPR_U32(ctx, 0));
    // 0x164e5c: 0xae001230  sw          $zero, 0x1230($s0)
    ctx->pc = 0x164e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 0));
    // 0x164e60: 0xae001268  sw          $zero, 0x1268($s0)
    ctx->pc = 0x164e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
    // 0x164e64: 0xae001244  sw          $zero, 0x1244($s0)
    ctx->pc = 0x164e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4676), GPR_U32(ctx, 0));
    // 0x164e68: 0xae001248  sw          $zero, 0x1248($s0)
    ctx->pc = 0x164e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4680), GPR_U32(ctx, 0));
    // 0x164e6c: 0xae00124c  sw          $zero, 0x124C($s0)
    ctx->pc = 0x164e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 0));
    // 0x164e70: 0xae001250  sw          $zero, 0x1250($s0)
    ctx->pc = 0x164e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4688), GPR_U32(ctx, 0));
    // 0x164e74: 0xae001254  sw          $zero, 0x1254($s0)
    ctx->pc = 0x164e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4692), GPR_U32(ctx, 0));
    ctx->pc = 0x164e78u;
}
