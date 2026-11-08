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

// Function: entry_001a2634
// Address: 0x1a2634 - 0x1a2698
void entry_001a2634_0x1a2634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2634_0x1a2634");
#endif

    switch (ctx->pc) {
        case 0x1a268cu: goto label_1a268c;
        default: break;
    }

    ctx->pc = 0x1a2634u;

    // 0x1a2634: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A2634u;
    {
        const bool branch_taken_0x1a2634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2634) {
            ctx->pc = 0x1A26F8u;
            return;
        }
    }
    ctx->pc = 0x1A263Cu;
    // 0x1a263c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a263cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a2640: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a2644: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2644u;
        // 0x1a2648: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A26F8u;
            return;
        }
    }
    ctx->pc = 0x1A264Cu;
    // 0x1a264c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1a264cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a2650: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x1a2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x1a2654: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2654u;
    {
        const bool branch_taken_0x1a2654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2654u;
        // 0x1a2658: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2654) {
            ctx->pc = 0x1A2698u;
            return;
        }
    }
    ctx->pc = 0x1A265Cu;
    // 0x1a265c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2660: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2664: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a2668: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1a2668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a266c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a2670: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a2674: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a2674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a2678: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a2678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a267c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a267cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a2680: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a2680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2684: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x1A2684u;
    SET_GPR_U32(ctx, 31, 0x1A268Cu);
    ctx->pc = 0x1A2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2684u;
    // 0x1a2688: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x1A2684u, 0x1A268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A268Cu;
label_1a268c:
    // 0x1a268c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A268Cu;
    {
        const bool branch_taken_0x1a268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a268c) {
            ctx->pc = 0x1A26D0u;
            return;
        }
    }
    ctx->pc = 0x1A2694u;
    // 0x1a2694: 0x0  nop
    ctx->pc = 0x1a2694u;
    // NOP
    ctx->pc = 0x1a2698u;
}
