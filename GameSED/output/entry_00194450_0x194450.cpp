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

// Function: entry_00194450
// Address: 0x194450 - 0x194498
void entry_00194450_0x194450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194450_0x194450");
#endif

    ctx->pc = 0x194450u;

    // 0x194450: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x194454: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x194454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x194458: 0x58c0000f  blezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x194458u;
    {
        const bool branch_taken_0x194458 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x194458) {
            ctx->pc = 0x19445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194458u;
            // 0x19445c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194498u;
            return;
        }
    }
    ctx->pc = 0x194460u;
    // 0x194460: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x194464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194468: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x194468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19446c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x194470: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x194470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194474: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x194474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x194478: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x194478u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x19447c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x194480: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194484: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x194484u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x194488: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19448c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19448Cu;
    {
        const bool branch_taken_0x19448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19448Cu;
        // 0x194490: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19448c) {
            ctx->pc = 0x19449Cu;
            return;
        }
    }
    ctx->pc = 0x194494u;
    // 0x194494: 0x0  nop
    ctx->pc = 0x194494u;
    // NOP
    ctx->pc = 0x194498u;
}
