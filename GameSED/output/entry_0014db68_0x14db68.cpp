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

// Function: entry_0014db68
// Address: 0x14db68 - 0x14dbd0
void entry_0014db68_0x14db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db68_0x14db68");
#endif

    ctx->pc = 0x14db68u;

    // 0x14db68: 0x2a82000c  slti        $v0, $s4, 0xC
    ctx->pc = 0x14db68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x14db6c: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x14DB6Cu;
    {
        const bool branch_taken_0x14db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB6Cu;
        // 0x14db70: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db6c) {
            ctx->pc = 0x14D8F0u;
            return;
        }
    }
    ctx->pc = 0x14DB74u;
    // 0x14db74: 0xae320194  sw          $s2, 0x194($s1)
    ctx->pc = 0x14db74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 18));
    // 0x14db78: 0x262406dc  addiu       $a0, $s1, 0x6DC
    ctx->pc = 0x14db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x14db7c: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x14db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14db80: 0x2406fcff  addiu       $a2, $zero, -0x301
    ctx->pc = 0x14db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x14db84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14db88: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x14db88u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db90: 0x30630300  andi        $v1, $v1, 0x300
    ctx->pc = 0x14db90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
    // 0x14db94: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x14db94u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14db98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14db98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14db9c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14dba0: 0x2625071c  addiu       $a1, $s1, 0x71C
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
    // 0x14dba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dba8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x14dbac: 0xe6200268  swc1        $f0, 0x268($s1)
    ctx->pc = 0x14dbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    // 0x14dbb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dbb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DBB4u;
    {
        const bool branch_taken_0x14dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB4u;
        // 0x14dbb8: 0xe621026c  swc1        $f1, 0x26C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb4) {
            ctx->pc = 0x14DBD0u;
            return;
        }
    }
    ctx->pc = 0x14DBBCu;
    // 0x14dbbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14dbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbc0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14dbc4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14dbc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dbcc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x14dbd0u;
}
