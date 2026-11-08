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

// Function: entry_001462bc
// Address: 0x1462bc - 0x146300
void entry_001462bc_0x1462bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001462bc_0x1462bc");
#endif

    ctx->pc = 0x1462bcu;

    // 0x1462bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1462bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1462c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1462c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1462c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1462c8: 0x245026c0  addiu       $s0, $v0, 0x26C0
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x1462cc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1462ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1462d0: 0x8e270164  lw          $a3, 0x164($s1)
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1462d4: 0xc4e10154  lwc1        $f1, 0x154($a3)
    ctx->pc = 0x1462d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1462d8: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1462dc: 0x0  nop
    ctx->pc = 0x1462dcu;
    // NOP
    // 0x1462e0: 0x0  nop
    ctx->pc = 0x1462e0u;
    // NOP
    // 0x1462e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1462e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1462e8: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x1462e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1462ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1462ECu;
    {
        const bool branch_taken_0x1462ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462ECu;
        // 0x1462f0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462ec) {
            ctx->pc = 0x146300u;
            return;
        }
    }
    ctx->pc = 0x1462F4u;
    // 0x1462f4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1462f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1462F8u;
    {
        const bool branch_taken_0x1462f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462F8u;
        // 0x1462fc: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462f8) {
            ctx->pc = 0x146304u;
            return;
        }
    }
    ctx->pc = 0x146300u;
}
