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

// Function: entry_00151afc
// Address: 0x151afc - 0x151b34
void entry_00151afc_0x151afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151afc_0x151afc");
#endif

    ctx->pc = 0x151afcu;

    // 0x151afc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x151afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151b00: 0x4600a146  mov.s       $f5, $f20
    ctx->pc = 0x151b00u;
    ctx->f[5] = FPU_MOV_S(ctx->f[20]);
    // 0x151b04: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x151b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151b08: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x151b08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x151b0c: 0xc6420650  lwc1        $f2, 0x650($s2)
    ctx->pc = 0x151b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151b10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x151b14: 0xc6400658  lwc1        $f0, 0x658($s2)
    ctx->pc = 0x151b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151b18: 0xc7848290  lwc1        $f4, -0x7D70($gp)
    ctx->pc = 0x151b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151b1c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x151b1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x151b20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151b24: 0xe6420650  swc1        $f2, 0x650($s2)
    ctx->pc = 0x151b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1616), bits); }
    // 0x151b28: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x151B28u;
    {
        const bool branch_taken_0x151b28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0xe6400658  swc1        $f0, 0x658($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b28) {
            ctx->pc = 0x151B34u;
            return;
        }
    }
    ctx->pc = 0x151B30u;
    // 0x151b30: 0xc7848294  lwc1        $f4, -0x7D6C($gp)
    ctx->pc = 0x151b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    ctx->pc = 0x151b34u;
}
