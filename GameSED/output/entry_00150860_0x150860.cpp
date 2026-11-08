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

// Function: entry_00150860
// Address: 0x150860 - 0x15089c
void entry_00150860_0x150860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150860_0x150860");
#endif

    ctx->pc = 0x150860u;

    // 0x150860: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x150860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150864: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x150864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x150868: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x150868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x15086c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150870: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x150870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x150874: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x150874u;
    {
        const bool branch_taken_0x150874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150874u;
        // 0x150878: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150874) {
            ctx->pc = 0x1508C8u;
            return;
        }
    }
    ctx->pc = 0x15087Cu;
    // 0x15087c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x15087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150888: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15088c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15088Cu;
    {
        const bool branch_taken_0x15088c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15088Cu;
        // 0x150890: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15088c) {
            ctx->pc = 0x15089Cu;
            return;
        }
    }
    ctx->pc = 0x150894u;
    // 0x150894: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150898: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x150898u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x15089cu;
}
