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

// Function: ApRsc3DResetWork__FP8ApcRsc3D
// Address: 0x142dd0 - 0x1431a8
void ApRsc3DResetWork__FP8ApcRsc3D_0x142dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DResetWork__FP8ApcRsc3D_0x142dd0");
#endif

    switch (ctx->pc) {
        case 0x142decu: goto label_142dec;
        case 0x142df4u: goto label_142df4;
        case 0x142dfcu: goto label_142dfc;
        case 0x142ea0u: goto label_142ea0;
        case 0x142ed0u: goto label_142ed0;
        case 0x142ee4u: goto label_142ee4;
        case 0x142ef8u: goto label_142ef8;
        case 0x142f0cu: goto label_142f0c;
        case 0x142f58u: goto label_142f58;
        case 0x142f78u: goto label_142f78;
        case 0x142f8cu: goto label_142f8c;
        case 0x142fb8u: goto label_142fb8;
        case 0x143038u: goto label_143038;
        case 0x14309cu: goto label_14309c;
        case 0x1430bcu: goto label_1430bc;
        case 0x1430d0u: goto label_1430d0;
        case 0x1430f8u: goto label_1430f8;
        case 0x143130u: goto label_143130;
        case 0x143194u: goto label_143194;
        default: break;
    }

    ctx->pc = 0x142dd0u;

    // 0x142dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x142dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142de4: 0xc050ef4  jal         func_143BD0
    ctx->pc = 0x142DE4u;
    SET_GPR_U32(ctx, 31, 0x142DECu);
    ctx->pc = 0x142DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DE4u;
    // 0x142de8: 0x26300300  addiu       $s0, $s1, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143BD0u, 0x142DE4u, 0x142DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DECu;
label_142dec:
    // 0x142dec: 0xc0516dc  jal         func_145B70
    ctx->pc = 0x142DECu;
    SET_GPR_U32(ctx, 31, 0x142DF4u);
    ctx->pc = 0x142DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DECu;
    // 0x142df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145B70u, 0x142DECu, 0x142DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DF4u;
label_142df4:
    // 0x142df4: 0xc050f54  jal         func_143D50
    ctx->pc = 0x142DF4u;
    SET_GPR_U32(ctx, 31, 0x142DFCu);
    ctx->pc = 0x142DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DF4u;
    // 0x142df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D50u, 0x142DF4u, 0x142DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DFCu;
label_142dfc:
    // 0x142dfc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x142dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x142e00: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x142e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x142e04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x142e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e08: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x142e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142e0c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x142e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x142e10: 0x54023  negu        $t0, $a1
    ctx->pc = 0x142e10u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x142e14: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x142e18: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x142e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x142e1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x142e20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x142e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x142e24: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x142e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x142e28: 0x63023  negu        $a2, $a2
    ctx->pc = 0x142e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x142e2c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x142e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x142e30: 0x73823  negu        $a3, $a3
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x142e34: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142e38: 0x29020011  slti        $v0, $t0, 0x11
    ctx->pc = 0x142e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x142e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x142e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x142e40: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x142e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x142e44: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x142e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x142e48: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x142e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x142e4c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x142e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x142e50: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x142e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x142e54: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x142E54u;
    {
        const bool branch_taken_0x142e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E54u;
        // 0x142e58: 0xae07000c  sw          $a3, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e54) {
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E5Cu;
    // 0x142e5c: 0x28e20011  slti        $v0, $a3, 0x11
    ctx->pc = 0x142e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x142e60: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x142E60u;
    {
        const bool branch_taken_0x142e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E60u;
        // 0x142e64: 0x28820021  slti        $v0, $a0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e60) {
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E68u;
    // 0x142e68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x142E68u;
    {
        const bool branch_taken_0x142e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E68u;
        // 0x142e6c: 0x28a20021  slti        $v0, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e68) {
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E70u;
    // 0x142e70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x142E70u;
    {
        const bool branch_taken_0x142e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E70u;
        // 0x142e74: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e70) {
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E78u;
    // 0x142e78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x142E78u;
    {
        const bool branch_taken_0x142e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E78u;
        // 0x142e7c: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e78) {
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E80u;
    // 0x142e80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x142E80u;
    {
        const bool branch_taken_0x142e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E80u;
        // 0x142e84: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e80) {
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E88u;
    // 0x142e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e8c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142E8Cu;
    {
        const bool branch_taken_0x142e8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E8Cu;
        // 0x142e90: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e8c) {
            ctx->pc = 0x142E98u;
            goto label_142e98;
        }
    }
    ctx->pc = 0x142E94u;
    // 0x142e94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_142e98:
    // 0x142e98: 0xc068086  jal         func_1A0218
    ctx->pc = 0x142E98u;
    SET_GPR_U32(ctx, 31, 0x142EA0u);
    ctx->pc = 0x142E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E98u;
    // 0x142e9c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x142E98u, 0x142EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EA0u;
label_142ea0:
    // 0x142ea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x142ea4: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x142ea4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142ea8:
    // 0x142ea8: 0x1520000e  bnez        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x142EA8u;
    {
        const bool branch_taken_0x142ea8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x142EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EA8u;
        // 0x142eac: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ea8) {
            ctx->pc = 0x142EE4u;
            goto label_142ee4;
        }
    }
    ctx->pc = 0x142EB0u;
    // 0x142eb0: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x142eb4: 0x8e260308  lw          $a2, 0x308($s1)
    ctx->pc = 0x142eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
    // 0x142eb8: 0x24846940  addiu       $a0, $a0, 0x6940
    ctx->pc = 0x142eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26944));
    // 0x142ebc: 0x8e27030c  lw          $a3, 0x30C($s1)
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x142ec0: 0x8e280310  lw          $t0, 0x310($s1)
    ctx->pc = 0x142ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x142ec4: 0x8e290314  lw          $t1, 0x314($s1)
    ctx->pc = 0x142ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x142ec8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x142EC8u;
    SET_GPR_U32(ctx, 31, 0x142ED0u);
    ctx->pc = 0x142ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EC8u;
    // 0x142ecc: 0x8e2a0318  lw          $t2, 0x318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x142EC8u, 0x142ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142ED0u;
label_142ed0:
    // 0x142ed0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x142ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x142ed4: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x142ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142edc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x142EDCu;
    SET_GPR_U32(ctx, 31, 0x142EE4u);
    ctx->pc = 0x142EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EDCu;
    // 0x142ee0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x142EDCu, 0x142EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EE4u;
label_142ee4:
    // 0x142ee4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142EE4u;
    {
        const bool branch_taken_0x142ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EE4u;
        // 0x142ee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ee4) {
            ctx->pc = 0x142EF0u;
            goto label_142ef0;
        }
    }
    ctx->pc = 0x142EECu;
    // 0x142eec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_142ef0:
    // 0x142ef0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x142EF0u;
    SET_GPR_U32(ctx, 31, 0x142EF8u);
    ctx->pc = 0x142EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EF0u;
    // 0x142ef4: 0x24054080  addiu       $a1, $zero, 0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x142EF0u, 0x142EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EF8u;
label_142ef8:
    // 0x142ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142efc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x142EFCu;
    {
        const bool branch_taken_0x142efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EFCu;
        // 0x142f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142efc) {
            ctx->pc = 0x142F3Cu;
            goto label_142f3c;
        }
    }
    ctx->pc = 0x142F04u;
    // 0x142f04: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x142F04u;
    SET_GPR_U32(ctx, 31, 0x142F0Cu);
    ctx->pc = 0x142F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F04u;
    // 0x142f08: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x142F04u, 0x142F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F0Cu;
label_142f0c:
    // 0x142f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142f10: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x142f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x142f14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142f18: 0xe6004014  swc1        $f0, 0x4014($s0)
    ctx->pc = 0x142f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16404), bits); }
    // 0x142f1c: 0xe6014010  swc1        $f1, 0x4010($s0)
    ctx->pc = 0x142f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16400), bits); }
    // 0x142f20: 0xe6004000  swc1        $f0, 0x4000($s0)
    ctx->pc = 0x142f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16384), bits); }
    // 0x142f24: 0xe6004004  swc1        $f0, 0x4004($s0)
    ctx->pc = 0x142f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16388), bits); }
    // 0x142f28: 0xe6004008  swc1        $f0, 0x4008($s0)
    ctx->pc = 0x142f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16392), bits); }
    // 0x142f2c: 0xe600400c  swc1        $f0, 0x400C($s0)
    ctx->pc = 0x142f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16396), bits); }
    // 0x142f30: 0xa2004019  sb          $zero, 0x4019($s0)
    ctx->pc = 0x142f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16409), (uint8_t)GPR_U32(ctx, 0));
    // 0x142f34: 0xa200401a  sb          $zero, 0x401A($s0)
    ctx->pc = 0x142f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16410), (uint8_t)GPR_U32(ctx, 0));
    // 0x142f38: 0xa200401b  sb          $zero, 0x401B($s0)
    ctx->pc = 0x142f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16411), (uint8_t)GPR_U32(ctx, 0));
label_142f3c:
    // 0x142f3c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142F3Cu;
    {
        const bool branch_taken_0x142f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F3Cu;
        // 0x142f40: 0xae300328  sw          $s0, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f3c) {
            ctx->pc = 0x142F58u;
            goto label_142f58;
        }
    }
    ctx->pc = 0x142F44u;
    // 0x142f44: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x142f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x142f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f4c: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x142f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x142f50: 0xc068186  jal         func_1A0618
    ctx->pc = 0x142F50u;
    SET_GPR_U32(ctx, 31, 0x142F58u);
    ctx->pc = 0x142F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F50u;
    // 0x142f54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x142F50u, 0x142F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F58u;
label_142f58:
    // 0x142f58: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x142f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x142f5c: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x142F5Cu;
    {
        const bool branch_taken_0x142f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f5c) {
            ctx->pc = 0x142F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142F5Cu;
            // 0x142f60: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1430A0u;
            goto label_1430a0;
        }
    }
    ctx->pc = 0x142F64u;
    // 0x142f64: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142F64u;
    {
        const bool branch_taken_0x142f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F64u;
        // 0x142f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f64) {
            ctx->pc = 0x142F70u;
            goto label_142f70;
        }
    }
    ctx->pc = 0x142F6Cu;
    // 0x142f6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_142f70:
    // 0x142f70: 0xc068086  jal         func_1A0218
    ctx->pc = 0x142F70u;
    SET_GPR_U32(ctx, 31, 0x142F78u);
    ctx->pc = 0x142F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F70u;
    // 0x142f74: 0x240547f0  addiu       $a1, $zero, 0x47F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x142F70u, 0x142F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F78u;
label_142f78:
    // 0x142f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142F7Cu;
    {
        const bool branch_taken_0x142f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F7Cu;
        // 0x142f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f7c) {
            ctx->pc = 0x142F8Cu;
            goto label_142f8c;
        }
    }
    ctx->pc = 0x142F84u;
    // 0x142f84: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x142F84u;
    SET_GPR_U32(ctx, 31, 0x142F8Cu);
    ctx->pc = 0x142F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F84u;
    // 0x142f88: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x142F84u, 0x142F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F8Cu;
label_142f8c:
    // 0x142f8c: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x142F8Cu;
    {
        const bool branch_taken_0x142f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F8Cu;
        // 0x142f90: 0xae300320  sw          $s0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f8c) {
            ctx->pc = 0x143088u;
            goto label_143088;
        }
    }
    ctx->pc = 0x142F94u;
    // 0x142f94: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x142f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x142f98: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x142f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f9c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x142f9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142fa0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x142fa4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x142fa8: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x142fac: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x142FACu;
    {
        const bool branch_taken_0x142fac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x142FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FACu;
        // 0x142fb0: 0xad4447e0  sw          $a0, 0x47E0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 18400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fac) {
            ctx->pc = 0x14309Cu;
            goto label_14309c;
        }
    }
    ctx->pc = 0x142FB4u;
    // 0x142fb4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x142fb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_142fb8:
    // 0x142fb8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x142fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142fbc: 0x25644000  addiu       $a0, $t3, 0x4000
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 16384));
    // 0x142fc0: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x142fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x142fc4: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x142fc8: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x142fcc: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x142fccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x142fd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x142fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142fd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x142fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142fd8: 0x84e60002  lh          $a2, 0x2($a3)
    ctx->pc = 0x142fd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x142fdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142fe0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x142fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x142fe4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x142fe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142fe8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x142fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x142fec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x142fecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142ff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142ff4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x142ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x142ff8: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x142ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x142ffc: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x142ffcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x143000: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x143000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x143004: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x143004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x143008: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x143008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x14300c: 0x90e30009  lbu         $v1, 0x9($a3)
    ctx->pc = 0x14300cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x143010: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x143010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x143014: 0x90e2000a  lbu         $v0, 0xA($a3)
    ctx->pc = 0x143014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x143018: 0xa0820012  sb          $v0, 0x12($a0)
    ctx->pc = 0x143018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x14301c: 0x90e3000b  lbu         $v1, 0xB($a3)
    ctx->pc = 0x14301cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x143020: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x143020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x143024: 0x84e2000c  lh          $v0, 0xC($a3)
    ctx->pc = 0x143024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x143028: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x143028u;
    {
        const bool branch_taken_0x143028 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143028u;
        // 0x14302c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143028) {
            ctx->pc = 0x143068u;
            goto label_143068;
        }
    }
    ctx->pc = 0x143030u;
    // 0x143030: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x143030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x143034: 0x0  nop
    ctx->pc = 0x143034u;
    // NOP
label_143038:
    // 0x143038: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x143038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14303c: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x143040: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x143044: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x143044u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143048: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x143048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14304c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x14304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x143050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143054: 0xa0652040  sb          $a1, 0x2040($v1)
    ctx->pc = 0x143054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8256), (uint8_t)GPR_U32(ctx, 5));
    // 0x143058: 0x84e2000c  lh          $v0, 0xC($a3)
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14305c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x14305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143060: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x143060u;
    {
        const bool branch_taken_0x143060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143060u;
        // 0x143064: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143060) {
            ctx->pc = 0x143038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143038;
        }
    }
    ctx->pc = 0x143068u;
label_143068:
    // 0x143068: 0x8d4247e0  lw          $v0, 0x47E0($t2)
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 18400)));
    // 0x14306c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x143070: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x143070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143074: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x143074u;
    {
        const bool branch_taken_0x143074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143074u;
        // 0x143078: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143074) {
            ctx->pc = 0x142FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142fb8;
        }
    }
    ctx->pc = 0x14307Cu;
    // 0x14307c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14307Cu;
    {
        const bool branch_taken_0x14307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14307Cu;
        // 0x143080: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14307c) {
            ctx->pc = 0x1430A0u;
            goto label_1430a0;
        }
    }
    ctx->pc = 0x143084u;
    // 0x143084: 0x0  nop
    ctx->pc = 0x143084u;
    // NOP
label_143088:
    // 0x143088: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14308c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143090: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x143090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x143094: 0xc068186  jal         func_1A0618
    ctx->pc = 0x143094u;
    SET_GPR_U32(ctx, 31, 0x14309Cu);
    ctx->pc = 0x143098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143094u;
    // 0x143098: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x143094u, 0x14309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14309Cu;
label_14309c:
    // 0x14309c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_1430a0:
    // 0x1430a0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1430A0u;
    {
        const bool branch_taken_0x1430a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430A0u;
        // 0x1430a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430a0) {
            ctx->pc = 0x143198u;
            goto label_143198;
        }
    }
    ctx->pc = 0x1430A8u;
    // 0x1430a8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1430A8u;
    {
        const bool branch_taken_0x1430a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430A8u;
        // 0x1430ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430a8) {
            ctx->pc = 0x1430B4u;
            goto label_1430b4;
        }
    }
    ctx->pc = 0x1430B0u;
    // 0x1430b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1430b4:
    // 0x1430b4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1430B4u;
    SET_GPR_U32(ctx, 31, 0x1430BCu);
    ctx->pc = 0x1430B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1430B4u;
    // 0x1430b8: 0x24054200  addiu       $a1, $zero, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1430B4u, 0x1430BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430BCu;
label_1430bc:
    // 0x1430bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1430bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1430C0u;
    {
        const bool branch_taken_0x1430c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430C0u;
        // 0x1430c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430c0) {
            ctx->pc = 0x1430D0u;
            goto label_1430d0;
        }
    }
    ctx->pc = 0x1430C8u;
    // 0x1430c8: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x1430C8u;
    SET_GPR_U32(ctx, 31, 0x1430D0u);
    ctx->pc = 0x1430CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1430C8u;
    // 0x1430cc: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x1430C8u, 0x1430D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430D0u;
label_1430d0:
    // 0x1430d0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1430D0u;
    {
        const bool branch_taken_0x1430d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430D0u;
        // 0x1430d4: 0xae300324  sw          $s0, 0x324($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430d0) {
            ctx->pc = 0x143180u;
            goto label_143180;
        }
    }
    ctx->pc = 0x1430D8u;
    // 0x1430d8: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x1430d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1430dc: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1430dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1430e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430e4: 0x8c6b0010  lw          $t3, 0x10($v1)
    ctx->pc = 0x1430e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1430e8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x1430e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1430ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1430ECu;
    {
        const bool branch_taken_0x1430ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430ECu;
        // 0x1430f0: 0x25670010  addiu       $a3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430ec) {
            ctx->pc = 0x143194u;
            goto label_143194;
        }
    }
    ctx->pc = 0x1430F4u;
    // 0x1430f4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1430f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1430f8:
    // 0x1430f8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1430f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430fc: 0x25254000  addiu       $a1, $t1, 0x4000
    ctx->pc = 0x1430fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16384));
    // 0x143100: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x143100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143104: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x143104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x143108: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x143108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x14310c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14310cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143110: 0x21023  negu        $v0, $v0
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x143114: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x143114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14311c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14311cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143120: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x143120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x143124: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x143124u;
    {
        const bool branch_taken_0x143124 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x143128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143124u;
        // 0x143128: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143124) {
            ctx->pc = 0x143160u;
            goto label_143160;
        }
    }
    ctx->pc = 0x14312Cu;
    // 0x14312c: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x14312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_143130:
    // 0x143130: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x143130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143134: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x143134u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x143138: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x143138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14313c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x14313cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143140: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x143140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x143144: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x143148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14314c: 0xa0652040  sb          $a1, 0x2040($v1)
    ctx->pc = 0x14314cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8256), (uint8_t)GPR_U32(ctx, 5));
    // 0x143150: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x143150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143154: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143158: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x143158u;
    {
        const bool branch_taken_0x143158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143158u;
        // 0x14315c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143158) {
            ctx->pc = 0x143130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143130;
        }
    }
    ctx->pc = 0x143160u;
label_143160:
    // 0x143160: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x143164: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x143164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x143168: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x143168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14316c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x14316Cu;
    {
        const bool branch_taken_0x14316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14316Cu;
        // 0x143170: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14316c) {
            ctx->pc = 0x1430F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1430f8;
        }
    }
    ctx->pc = 0x143174u;
    // 0x143174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143174u;
    {
        const bool branch_taken_0x143174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143174u;
        // 0x143178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143174) {
            ctx->pc = 0x143198u;
            goto label_143198;
        }
    }
    ctx->pc = 0x14317Cu;
    // 0x14317c: 0x0  nop
    ctx->pc = 0x14317cu;
    // NOP
label_143180:
    // 0x143180: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x143184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143188: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x143188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x14318c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14318Cu;
    SET_GPR_U32(ctx, 31, 0x143194u);
    ctx->pc = 0x143190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14318Cu;
    // 0x143190: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14318Cu, 0x143194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143194u;
label_143194:
    // 0x143194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143198:
    // 0x143198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14319c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14319cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1431a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1431A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431A0u;
        // 0x1431a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1431A8u;
}
