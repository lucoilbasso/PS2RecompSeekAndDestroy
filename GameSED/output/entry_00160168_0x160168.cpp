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

// Function: entry_00160168
// Address: 0x160168 - 0x1601a8
void entry_00160168_0x160168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160168_0x160168");
#endif

    ctx->pc = 0x160168u;

    // 0x160168: 0xc6610fc4  lwc1        $f1, 0xFC4($s3)
    ctx->pc = 0x160168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16016c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x16016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160170: 0x8e630fc0  lw          $v1, 0xFC0($s3)
    ctx->pc = 0x160170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
    // 0x160174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160178: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16017c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16017cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x160180: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x160180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160184: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x160184u;
    {
        const bool branch_taken_0x160184 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x160188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160184u;
        // 0x160188: 0x2404ffce  addiu       $a0, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160184) {
            ctx->pc = 0x1601DCu;
            return;
        }
    }
    ctx->pc = 0x16018Cu;
    // 0x16018c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x16018cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160190: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x160190u;
    {
        const bool branch_taken_0x160190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160190) {
            ctx->pc = 0x160194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160190u;
            // 0x160194: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601E0u;
            return;
        }
    }
    ctx->pc = 0x160198u;
    // 0x160198: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x160198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x16019c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x16019cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1601a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1601A0u;
    {
        const bool branch_taken_0x1601a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601A0u;
        // 0x1601a4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601a0) {
            ctx->pc = 0x1601C8u;
            return;
        }
    }
    ctx->pc = 0x1601A8u;
}
