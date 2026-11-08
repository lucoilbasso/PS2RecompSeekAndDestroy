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

// Function: entry_00153adc
// Address: 0x153adc - 0x153b10
void entry_00153adc_0x153adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153adc_0x153adc");
#endif

    ctx->pc = 0x153adcu;

    // 0x153adc: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x153adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x153ae0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153AE0u;
    {
        const bool branch_taken_0x153ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ae0) {
            ctx->pc = 0x153AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153AE0u;
            // 0x153ae4: 0x8e2406d8  lw          $a0, 0x6D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B10u;
            return;
        }
    }
    ctx->pc = 0x153AE8u;
    // 0x153ae8: 0xc62103cc  lwc1        $f1, 0x3CC($s1)
    ctx->pc = 0x153ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153aec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x153af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153af4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153af8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x153AF8u;
    {
        const bool branch_taken_0x153af8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153af8) {
            ctx->pc = 0x153AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153AF8u;
            // 0x153afc: 0x8e2406d8  lw          $a0, 0x6D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B10u;
            return;
        }
    }
    ctx->pc = 0x153B00u;
    // 0x153b00: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x153b04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x153b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153b08: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x153b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    // 0x153b0c: 0x8e2406d8  lw          $a0, 0x6D8($s1)
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
    ctx->pc = 0x153b10u;
}
