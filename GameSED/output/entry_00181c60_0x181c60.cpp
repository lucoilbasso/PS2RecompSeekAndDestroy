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

// Function: entry_00181c60
// Address: 0x181c60 - 0x181c8c
void entry_00181c60_0x181c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c60_0x181c60");
#endif

    ctx->pc = 0x181c60u;

    // 0x181c60: 0x9122000c  lbu         $v0, 0xC($t1)
    ctx->pc = 0x181c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x181c64: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x181c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x181c68: 0x544000f1  bnel        $v0, $zero, . + 4 + (0xF1 << 2)
    ctx->pc = 0x181C68u;
    {
        const bool branch_taken_0x181c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181c68) {
            ctx->pc = 0x181C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C68u;
            // 0x181c6c: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            return;
        }
    }
    ctx->pc = 0x181C70u;
    // 0x181c70: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x181c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c74: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x181c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181c78: 0x46050101  sub.s       $f4, $f0, $f5
    ctx->pc = 0x181c78u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x181c7c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x181c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181c80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x181C80u;
    {
        const bool branch_taken_0x181c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C80u;
        // 0x181c84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c80) {
            ctx->pc = 0x181C8Cu;
            return;
        }
    }
    ctx->pc = 0x181C88u;
    // 0x181c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181c8cu;
}
