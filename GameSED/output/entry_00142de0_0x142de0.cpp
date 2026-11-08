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

// Function: entry_00142de0
// Address: 0x142de0 - 0x142e98
void entry_00142de0_0x142de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142de0_0x142de0");
#endif

    switch (ctx->pc) {
        case 0x142decu: goto label_142dec;
        case 0x142df4u: goto label_142df4;
        case 0x142dfcu: goto label_142dfc;
        default: break;
    }

    ctx->pc = 0x142de0u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x142E94u;
    // 0x142e94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x142e98u;
}
