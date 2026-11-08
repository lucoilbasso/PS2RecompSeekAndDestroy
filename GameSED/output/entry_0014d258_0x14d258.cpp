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

// Function: entry_0014d258
// Address: 0x14d258 - 0x14d2b8
void entry_0014d258_0x14d258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d258_0x14d258");
#endif

    ctx->pc = 0x14d258u;

    // 0x14d258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d264: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14d264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14d268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d26c: 0x8c463630  lw          $a2, 0x3630($v0)
    ctx->pc = 0x14d26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x14d270: 0x50c00022  beql        $a2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x14D270u;
    {
        const bool branch_taken_0x14d270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d270) {
            ctx->pc = 0x14D274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D270u;
            // 0x14d274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D2FCu;
            return;
        }
    }
    ctx->pc = 0x14D278u;
    // 0x14d278: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14D278u;
    {
        const bool branch_taken_0x14d278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d278) {
            ctx->pc = 0x14D27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D278u;
            // 0x14d27c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D2D0u;
            return;
        }
    }
    ctx->pc = 0x14D280u;
    // 0x14d280: 0x8cc201ac  lw          $v0, 0x1AC($a2)
    ctx->pc = 0x14d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x14d284: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14d284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14d288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d28c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d294: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14d298: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14d298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14d29c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D29Cu;
    {
        const bool branch_taken_0x14d29c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D29Cu;
        // 0x14d2a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d29c) {
            ctx->pc = 0x14D2B8u;
            return;
        }
    }
    ctx->pc = 0x14D2A4u;
    // 0x14d2a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14d2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14d2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14d2ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d2acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d2b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14d2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14d2b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14d2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->pc = 0x14d2b8u;
}
