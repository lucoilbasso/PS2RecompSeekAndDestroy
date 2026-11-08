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

// Function: caseD_2
// Address: 0x166d68 - 0x166fe0
void caseD_2_0x166d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x166d68");
#endif

    switch (ctx->pc) {
        case 0x166d68u: goto label_166d68;
        case 0x166d6cu: goto label_166d6c;
        case 0x166d70u: goto label_166d70;
        case 0x166d74u: goto label_166d74;
        case 0x166d78u: goto label_166d78;
        case 0x166d7cu: goto label_166d7c;
        case 0x166d80u: goto label_166d80;
        case 0x166d84u: goto label_166d84;
        case 0x166d88u: goto label_166d88;
        case 0x166d8cu: goto label_166d8c;
        case 0x166d90u: goto label_166d90;
        case 0x166d94u: goto label_166d94;
        case 0x166d98u: goto label_166d98;
        case 0x166d9cu: goto label_166d9c;
        case 0x166da0u: goto label_166da0;
        case 0x166da4u: goto label_166da4;
        case 0x166da8u: goto label_166da8;
        case 0x166dacu: goto label_166dac;
        case 0x166db0u: goto label_166db0;
        case 0x166db4u: goto label_166db4;
        case 0x166db8u: goto label_166db8;
        case 0x166dbcu: goto label_166dbc;
        case 0x166dc0u: goto label_166dc0;
        case 0x166dc4u: goto label_166dc4;
        case 0x166dc8u: goto label_166dc8;
        case 0x166dccu: goto label_166dcc;
        case 0x166dd0u: goto label_166dd0;
        case 0x166dd4u: goto label_166dd4;
        case 0x166dd8u: goto label_166dd8;
        case 0x166ddcu: goto label_166ddc;
        case 0x166de0u: goto label_166de0;
        case 0x166de4u: goto label_166de4;
        case 0x166de8u: goto label_166de8;
        case 0x166decu: goto label_166dec;
        case 0x166df0u: goto label_166df0;
        case 0x166df4u: goto label_166df4;
        case 0x166df8u: goto label_166df8;
        case 0x166dfcu: goto label_166dfc;
        case 0x166e00u: goto label_166e00;
        case 0x166e04u: goto label_166e04;
        case 0x166e08u: goto label_166e08;
        case 0x166e0cu: goto label_166e0c;
        case 0x166e10u: goto label_166e10;
        case 0x166e14u: goto label_166e14;
        case 0x166e18u: goto label_166e18;
        case 0x166e1cu: goto label_166e1c;
        case 0x166e20u: goto label_166e20;
        case 0x166e24u: goto label_166e24;
        case 0x166e28u: goto label_166e28;
        case 0x166e2cu: goto label_166e2c;
        case 0x166e30u: goto label_166e30;
        case 0x166e34u: goto label_166e34;
        case 0x166e38u: goto label_166e38;
        case 0x166e3cu: goto label_166e3c;
        case 0x166e40u: goto label_166e40;
        case 0x166e44u: goto label_166e44;
        case 0x166e48u: goto label_166e48;
        case 0x166e4cu: goto label_166e4c;
        case 0x166e50u: goto label_166e50;
        case 0x166e54u: goto label_166e54;
        case 0x166e58u: goto label_166e58;
        case 0x166e5cu: goto label_166e5c;
        case 0x166e60u: goto label_166e60;
        case 0x166e64u: goto label_166e64;
        case 0x166e68u: goto label_166e68;
        case 0x166e6cu: goto label_166e6c;
        case 0x166e70u: goto label_166e70;
        case 0x166e74u: goto label_166e74;
        case 0x166e78u: goto label_166e78;
        case 0x166e7cu: goto label_166e7c;
        case 0x166e80u: goto label_166e80;
        case 0x166e84u: goto label_166e84;
        case 0x166e88u: goto label_166e88;
        case 0x166e8cu: goto label_166e8c;
        case 0x166e90u: goto label_166e90;
        case 0x166e94u: goto label_166e94;
        case 0x166e98u: goto label_166e98;
        case 0x166e9cu: goto label_166e9c;
        case 0x166ea0u: goto label_166ea0;
        case 0x166ea4u: goto label_166ea4;
        case 0x166ea8u: goto label_166ea8;
        case 0x166eacu: goto label_166eac;
        case 0x166eb0u: goto label_166eb0;
        case 0x166eb4u: goto label_166eb4;
        case 0x166eb8u: goto label_166eb8;
        case 0x166ebcu: goto label_166ebc;
        case 0x166ec0u: goto label_166ec0;
        case 0x166ec4u: goto label_166ec4;
        case 0x166ec8u: goto label_166ec8;
        case 0x166eccu: goto label_166ecc;
        case 0x166ed0u: goto label_166ed0;
        case 0x166ed4u: goto label_166ed4;
        case 0x166ed8u: goto label_166ed8;
        case 0x166edcu: goto label_166edc;
        case 0x166ee0u: goto label_166ee0;
        case 0x166ee4u: goto label_166ee4;
        case 0x166ee8u: goto label_166ee8;
        case 0x166eecu: goto label_166eec;
        case 0x166ef0u: goto label_166ef0;
        case 0x166ef4u: goto label_166ef4;
        case 0x166ef8u: goto label_166ef8;
        case 0x166efcu: goto label_166efc;
        case 0x166f00u: goto label_166f00;
        case 0x166f04u: goto label_166f04;
        case 0x166f08u: goto label_166f08;
        case 0x166f0cu: goto label_166f0c;
        case 0x166f10u: goto label_166f10;
        case 0x166f14u: goto label_166f14;
        case 0x166f18u: goto label_166f18;
        case 0x166f1cu: goto label_166f1c;
        case 0x166f20u: goto label_166f20;
        case 0x166f24u: goto label_166f24;
        case 0x166f28u: goto label_166f28;
        case 0x166f2cu: goto label_166f2c;
        case 0x166f30u: goto label_166f30;
        case 0x166f34u: goto label_166f34;
        case 0x166f38u: goto label_166f38;
        case 0x166f3cu: goto label_166f3c;
        case 0x166f40u: goto label_166f40;
        case 0x166f44u: goto label_166f44;
        case 0x166f48u: goto label_166f48;
        case 0x166f4cu: goto label_166f4c;
        case 0x166f50u: goto label_166f50;
        case 0x166f54u: goto label_166f54;
        case 0x166f58u: goto label_166f58;
        case 0x166f5cu: goto label_166f5c;
        case 0x166f60u: goto label_166f60;
        case 0x166f64u: goto label_166f64;
        case 0x166f68u: goto label_166f68;
        case 0x166f6cu: goto label_166f6c;
        case 0x166f70u: goto label_166f70;
        case 0x166f74u: goto label_166f74;
        case 0x166f78u: goto label_166f78;
        case 0x166f7cu: goto label_166f7c;
        case 0x166f80u: goto label_166f80;
        case 0x166f84u: goto label_166f84;
        case 0x166f88u: goto label_166f88;
        case 0x166f8cu: goto label_166f8c;
        case 0x166f90u: goto label_166f90;
        case 0x166f94u: goto label_166f94;
        case 0x166f98u: goto label_166f98;
        case 0x166f9cu: goto label_166f9c;
        case 0x166fa0u: goto label_166fa0;
        case 0x166fa4u: goto label_166fa4;
        case 0x166fa8u: goto label_166fa8;
        case 0x166facu: goto label_166fac;
        case 0x166fb0u: goto label_166fb0;
        case 0x166fb4u: goto label_166fb4;
        case 0x166fb8u: goto label_166fb8;
        case 0x166fbcu: goto label_166fbc;
        case 0x166fc0u: goto label_166fc0;
        case 0x166fc4u: goto label_166fc4;
        case 0x166fc8u: goto label_166fc8;
        case 0x166fccu: goto label_166fcc;
        case 0x166fd0u: goto label_166fd0;
        case 0x166fd4u: goto label_166fd4;
        case 0x166fd8u: goto label_166fd8;
        case 0x166fdcu: goto label_166fdc;
        default: break;
    }

    ctx->pc = 0x166d68u;

label_166d68:
    // 0x166d68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x166d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_166d6c:
    // 0x166d6c: 0x54400187  bnel        $v0, $zero, . + 4 + (0x187 << 2)
label_166d70:
    if (ctx->pc == 0x166D70u) {
        ctx->pc = 0x166D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D6Cu;
        // 0x166d70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D74u;
        goto label_166d74;
    }
    ctx->pc = 0x166D6Cu;
    {
        const bool branch_taken_0x166d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166d6c) {
            ctx->pc = 0x166D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D6Cu;
            // 0x166d70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16738Cu;
            return;
        }
    }
    ctx->pc = 0x166D74u;
label_166d74:
    // 0x166d74: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
label_166d78:
    if (ctx->pc == 0x166D78u) {
        ctx->pc = 0x166D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D74u;
        // 0x166d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D7Cu;
        goto label_166d7c;
    }
    ctx->pc = 0x166D74u;
    {
        const bool branch_taken_0x166d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D74u;
        // 0x166d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d74) {
            ctx->pc = 0x166FE0u;
            return;
        }
    }
    ctx->pc = 0x166D7Cu;
label_166d7c:
    // 0x166d7c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x166d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_166d80:
    // 0x166d80: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166d84:
    // 0x166d84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166d88:
    // 0x166d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166d8c:
    // 0x166d8c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166d90:
    // 0x166d90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166d94:
    // 0x166d94: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166d98:
    // 0x166d98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166d9c:
    // 0x166d9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166da0:
    // 0x166da0: 0x60f809  jalr        $v1
label_166da4:
    if (ctx->pc == 0x166DA4u) {
        ctx->pc = 0x166DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA0u;
        // 0x166da4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166DA8u;
        goto label_166da8;
    }
    ctx->pc = 0x166DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166DA8u);
        ctx->pc = 0x166DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA0u;
        // 0x166da4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166DA0u, 0x166DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166DA8u;
label_166da8:
    // 0x166da8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_166dac:
    // 0x166dac: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166db0:
    // 0x166db0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166db4:
    // 0x166db4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166db8:
    // 0x166db8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166dbc:
    // 0x166dbc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166dc0:
    // 0x166dc0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166dc4:
    // 0x166dc4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166dc8:
    // 0x166dc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166dcc:
    // 0x166dcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166dd0:
    // 0x166dd0: 0x60f809  jalr        $v1
label_166dd4:
    if (ctx->pc == 0x166DD4u) {
        ctx->pc = 0x166DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DD0u;
        // 0x166dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166DD8u;
        goto label_166dd8;
    }
    ctx->pc = 0x166DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166DD8u);
        ctx->pc = 0x166DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DD0u;
        // 0x166dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166DD0u, 0x166DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166DD8u;
label_166dd8:
    // 0x166dd8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x166dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_166ddc:
    // 0x166ddc: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166de0:
    // 0x166de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166de4:
    // 0x166de4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166de8:
    // 0x166de8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166dec:
    // 0x166dec: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166df0:
    // 0x166df0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166df4:
    // 0x166df4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166df8:
    // 0x166df8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166dfc:
    // 0x166dfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e00:
    // 0x166e00: 0x60f809  jalr        $v1
label_166e04:
    if (ctx->pc == 0x166E04u) {
        ctx->pc = 0x166E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E00u;
        // 0x166e04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E08u;
        goto label_166e08;
    }
    ctx->pc = 0x166E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E08u);
        ctx->pc = 0x166E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E00u;
        // 0x166e04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E00u, 0x166E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E08u;
label_166e08:
    // 0x166e08: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x166e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_166e0c:
    // 0x166e0c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166e10:
    // 0x166e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166e14:
    // 0x166e14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166e18:
    // 0x166e18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166e1c:
    // 0x166e1c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166e20:
    // 0x166e20: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166e24:
    // 0x166e24: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166e28:
    // 0x166e28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166e2c:
    // 0x166e2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e30:
    // 0x166e30: 0x60f809  jalr        $v1
label_166e34:
    if (ctx->pc == 0x166E34u) {
        ctx->pc = 0x166E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E30u;
        // 0x166e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E38u;
        goto label_166e38;
    }
    ctx->pc = 0x166E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E38u);
        ctx->pc = 0x166E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E30u;
        // 0x166e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E30u, 0x166E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E38u;
label_166e38:
    // 0x166e38: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x166e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_166e3c:
    // 0x166e3c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166e40:
    // 0x166e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166e44:
    // 0x166e44: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166e48:
    // 0x166e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166e4c:
    // 0x166e4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166e50:
    // 0x166e50: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166e54:
    // 0x166e54: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166e58:
    // 0x166e58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166e5c:
    // 0x166e5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e60:
    // 0x166e60: 0x60f809  jalr        $v1
label_166e64:
    if (ctx->pc == 0x166E64u) {
        ctx->pc = 0x166E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E60u;
        // 0x166e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E68u;
        goto label_166e68;
    }
    ctx->pc = 0x166E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E68u);
        ctx->pc = 0x166E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E60u;
        // 0x166e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E60u, 0x166E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E68u;
label_166e68:
    // 0x166e68: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_166e6c:
    // 0x166e6c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166e70:
    // 0x166e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166e74:
    // 0x166e74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166e78:
    // 0x166e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166e7c:
    // 0x166e7c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166e80:
    // 0x166e80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166e84:
    // 0x166e84: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166e88:
    // 0x166e88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166e8c:
    // 0x166e8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e90:
    // 0x166e90: 0x60f809  jalr        $v1
label_166e94:
    if (ctx->pc == 0x166E94u) {
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E90u;
        // 0x166e94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E98u;
        goto label_166e98;
    }
    ctx->pc = 0x166E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E98u);
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E90u;
        // 0x166e94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E90u, 0x166E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E98u;
label_166e98:
    // 0x166e98: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166e9c:
    // 0x166e9c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166ea0:
    // 0x166ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ea4:
    // 0x166ea4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166ea8:
    // 0x166ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166eac:
    // 0x166eac: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166eb0:
    // 0x166eb0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166eb4:
    // 0x166eb4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166eb8:
    // 0x166eb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166ebc:
    // 0x166ebc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166ec0:
    // 0x166ec0: 0x60f809  jalr        $v1
label_166ec4:
    if (ctx->pc == 0x166EC4u) {
        ctx->pc = 0x166EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EC0u;
        // 0x166ec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EC8u;
        goto label_166ec8;
    }
    ctx->pc = 0x166EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166EC8u);
        ctx->pc = 0x166EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EC0u;
        // 0x166ec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166EC0u, 0x166EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166EC8u;
label_166ec8:
    // 0x166ec8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166ecc:
    // 0x166ecc: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166ed0:
    // 0x166ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ed4:
    // 0x166ed4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166ed8:
    // 0x166ed8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166edc:
    // 0x166edc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166ee0:
    // 0x166ee0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166ee4:
    // 0x166ee4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166ee8:
    // 0x166ee8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166eec:
    // 0x166eec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166ef0:
    // 0x166ef0: 0x60f809  jalr        $v1
label_166ef4:
    if (ctx->pc == 0x166EF4u) {
        ctx->pc = 0x166EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF0u;
        // 0x166ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EF8u;
        goto label_166ef8;
    }
    ctx->pc = 0x166EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166EF8u);
        ctx->pc = 0x166EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF0u;
        // 0x166ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166EF0u, 0x166EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166EF8u;
label_166ef8:
    // 0x166ef8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166efc:
    // 0x166efc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x166efcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166f00:
    // 0x166f00: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x166f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166f04:
    // 0x166f04: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x166f04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_166f08:
    // 0x166f08: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x166f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_166f0c:
    // 0x166f0c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166f10:
    // 0x166f10: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166f14:
    // 0x166f14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166f18:
    // 0x166f18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166f1c:
    // 0x166f1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166f20:
    // 0x166f20: 0xc79583b4  lwc1        $f21, -0x7C4C($gp)
    ctx->pc = 0x166f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166f24:
    // 0x166f24: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166f28:
    // 0x166f28: 0xc79683b8  lwc1        $f22, -0x7C48($gp)
    ctx->pc = 0x166f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166f2c:
    // 0x166f2c: 0xc79783bc  lwc1        $f23, -0x7C44($gp)
    ctx->pc = 0x166f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_166f30:
    // 0x166f30: 0xc06164c  jal         func_185930
label_166f34:
    if (ctx->pc == 0x166F34u) {
        ctx->pc = 0x166F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F30u;
        // 0x166f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F38u;
        goto label_166f38;
    }
    ctx->pc = 0x166F30u;
    SET_GPR_U32(ctx, 31, 0x166F38u);
    ctx->pc = 0x166F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F30u;
    // 0x166f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166F30u, 0x166F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F38u;
label_166f38:
    // 0x166f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f3c:
    // 0x166f3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166f40:
    // 0x166f40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166f44:
    // 0x166f44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166f48:
    // 0x166f48: 0xc069532  jal         func_1A54C8
label_166f4c:
    if (ctx->pc == 0x166F4Cu) {
        ctx->pc = 0x166F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F48u;
        // 0x166f4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F50u;
        goto label_166f50;
    }
    ctx->pc = 0x166F48u;
    SET_GPR_U32(ctx, 31, 0x166F50u);
    ctx->pc = 0x166F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F48u;
    // 0x166f4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166F48u, 0x166F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F50u;
label_166f50:
    // 0x166f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f54:
    // 0x166f54: 0xc06164c  jal         func_185930
label_166f58:
    if (ctx->pc == 0x166F58u) {
        ctx->pc = 0x166F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F54u;
        // 0x166f58: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F5Cu;
        goto label_166f5c;
    }
    ctx->pc = 0x166F54u;
    SET_GPR_U32(ctx, 31, 0x166F5Cu);
    ctx->pc = 0x166F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F54u;
    // 0x166f58: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166F54u, 0x166F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F5Cu;
label_166f5c:
    // 0x166f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f60:
    // 0x166f60: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x166f60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_166f64:
    // 0x166f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166f68:
    // 0x166f68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x166f68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_166f6c:
    // 0x166f6c: 0xc0694d2  jal         func_1A5348
label_166f70:
    if (ctx->pc == 0x166F70u) {
        ctx->pc = 0x166F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F6Cu;
        // 0x166f70: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F74u;
        goto label_166f74;
    }
    ctx->pc = 0x166F6Cu;
    SET_GPR_U32(ctx, 31, 0x166F74u);
    ctx->pc = 0x166F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F6Cu;
    // 0x166f70: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x166F6Cu, 0x166F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F74u;
label_166f74:
    // 0x166f74: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x166f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_166f78:
    // 0x166f78: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166f7c:
    // 0x166f7c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166f80:
    // 0x166f80: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166f84:
    // 0x166f84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166f88:
    // 0x166f88: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166f8c:
    // 0x166f8c: 0xc06164c  jal         func_185930
label_166f90:
    if (ctx->pc == 0x166F90u) {
        ctx->pc = 0x166F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F8Cu;
        // 0x166f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F94u;
        goto label_166f94;
    }
    ctx->pc = 0x166F8Cu;
    SET_GPR_U32(ctx, 31, 0x166F94u);
    ctx->pc = 0x166F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F8Cu;
    // 0x166f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166F8Cu, 0x166F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F94u;
label_166f94:
    // 0x166f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f98:
    // 0x166f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166f9c:
    // 0x166f9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166fa0:
    // 0x166fa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166fa4:
    // 0x166fa4: 0xc069532  jal         func_1A54C8
label_166fa8:
    if (ctx->pc == 0x166FA8u) {
        ctx->pc = 0x166FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FA4u;
        // 0x166fa8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FACu;
        goto label_166fac;
    }
    ctx->pc = 0x166FA4u;
    SET_GPR_U32(ctx, 31, 0x166FACu);
    ctx->pc = 0x166FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FA4u;
    // 0x166fa8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166FA4u, 0x166FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FACu;
label_166fac:
    // 0x166fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166fb0:
    // 0x166fb0: 0xc06164c  jal         func_185930
label_166fb4:
    if (ctx->pc == 0x166FB4u) {
        ctx->pc = 0x166FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FB0u;
        // 0x166fb4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FB8u;
        goto label_166fb8;
    }
    ctx->pc = 0x166FB0u;
    SET_GPR_U32(ctx, 31, 0x166FB8u);
    ctx->pc = 0x166FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FB0u;
    // 0x166fb4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166FB0u, 0x166FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FB8u;
label_166fb8:
    // 0x166fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166fbc:
    // 0x166fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166fc0:
    // 0x166fc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x166fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_166fc4:
    // 0x166fc4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x166fc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_166fc8:
    // 0x166fc8: 0xc0694d2  jal         func_1A5348
label_166fcc:
    if (ctx->pc == 0x166FCCu) {
        ctx->pc = 0x166FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FC8u;
        // 0x166fcc: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FD0u;
        goto label_166fd0;
    }
    ctx->pc = 0x166FC8u;
    SET_GPR_U32(ctx, 31, 0x166FD0u);
    ctx->pc = 0x166FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FC8u;
    // 0x166fcc: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x166FC8u, 0x166FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FD0u;
label_166fd0:
    // 0x166fd0: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x166fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_166fd4:
    // 0x166fd4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_166fd8:
    // 0x166fd8: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_166fdc:
    if (ctx->pc == 0x166FDCu) {
        ctx->pc = 0x166FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FD8u;
        // 0x166fdc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FE0u;
        goto label_fallthrough_0x166fd8;
    }
    ctx->pc = 0x166FD8u;
    {
        const bool branch_taken_0x166fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FD8u;
        // 0x166fdc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fd8) {
            ctx->pc = 0x1673A8u;
            return;
        }
    }
label_fallthrough_0x166fd8:
    ctx->pc = 0x166FE0u;
}
