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

// Function: entry_00139da4
// Address: 0x139da4 - 0x139e08
void entry_00139da4_0x139da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139da4_0x139da4");
#endif

    switch (ctx->pc) {
        case 0x139de0u: goto label_139de0;
        case 0x139e00u: goto label_139e00;
        default: break;
    }

    ctx->pc = 0x139da4u;

label_139da4:
    // 0x139da4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_139da8:
    // 0x139da8: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x139da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_139dac:
    // 0x139dac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_139db0:
    // 0x139db0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x139db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_139db4:
    // 0x139db4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x139db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_139db8:
    // 0x139db8: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x139db8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_139dbc:
    // 0x139dbc: 0x1046002f  beq         $v0, $a2, . + 4 + (0x2F << 2)
label_139dc0:
    if (ctx->pc == 0x139DC0u) {
        ctx->pc = 0x139DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DBCu;
        // 0x139dc0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DC4u;
        goto label_139dc4;
    }
    ctx->pc = 0x139DBCu;
    {
        const bool branch_taken_0x139dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x139DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DBCu;
        // 0x139dc0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139dbc) {
            ctx->pc = 0x139E7Cu;
            return;
        }
    }
    ctx->pc = 0x139DC4u;
label_139dc4:
    // 0x139dc4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x139dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139dc8:
    // 0x139dc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_139dcc:
    // 0x139dcc: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x139dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139dd0:
    // 0x139dd0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_139dd4:
    // 0x139dd4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x139dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_139dd8:
    // 0x139dd8: 0xc0677bc  jal         func_19DEF0
label_139ddc:
    if (ctx->pc == 0x139DDCu) {
        ctx->pc = 0x139DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DD8u;
        // 0x139ddc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DE0u;
        goto label_139de0;
    }
    ctx->pc = 0x139DD8u;
    SET_GPR_U32(ctx, 31, 0x139DE0u);
    ctx->pc = 0x139DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DD8u;
    // 0x139ddc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEF0u, 0x139DD8u, 0x139DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DE0u;
label_139de0:
    // 0x139de0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x139de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_139de4:
    // 0x139de4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x139de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_139de8:
    // 0x139de8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x139de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_139dec:
    // 0x139dec: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x139decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_139df0:
    // 0x139df0: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_139df4:
    if (ctx->pc == 0x139DF4u) {
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF0u;
        // 0x139df4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DF8u;
        goto label_139df8;
    }
    ctx->pc = 0x139DF0u;
    {
        const bool branch_taken_0x139df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF0u;
        // 0x139df4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139df0) {
            ctx->pc = 0x139E7Cu;
            return;
        }
    }
    ctx->pc = 0x139DF8u;
label_139df8:
    // 0x139df8: 0xa0f809  jalr        $a1
label_139dfc:
    if (ctx->pc == 0x139DFCu) {
        ctx->pc = 0x139DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF8u;
        // 0x139dfc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E00u;
        goto label_139e00;
    }
    ctx->pc = 0x139DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x139E00u);
        ctx->pc = 0x139DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF8u;
        // 0x139dfc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DF8u, 0x139E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139E00u;
label_139e00:
    // 0x139e00: 0x1000001e  b           . + 4 + (0x1E << 2)
label_139e04:
    if (ctx->pc == 0x139E04u) {
        ctx->pc = 0x139E08u;
        goto label_fallthrough_0x139e00;
    }
    ctx->pc = 0x139E00u;
    {
        const bool branch_taken_0x139e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e00) {
            ctx->pc = 0x139E7Cu;
            return;
        }
    }
label_fallthrough_0x139e00:
    ctx->pc = 0x139E08u;
}
