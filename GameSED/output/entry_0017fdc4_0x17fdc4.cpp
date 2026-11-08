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

// Function: entry_0017fdc4
// Address: 0x17fdc4 - 0x17fe00
void entry_0017fdc4_0x17fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fdc4_0x17fdc4");
#endif

    ctx->pc = 0x17fdc4u;

    // 0x17fdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fdc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdcc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17fdd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17fdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fdd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17fdd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fdd8: 0x24a57d78  addiu       $a1, $a1, 0x7D78
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32120));
    // 0x17fddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fde0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fde4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fde8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17fde8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fdec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fdf0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x17fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fdf4: 0x8068186  j           func_1A0618
    ctx->pc = 0x17FDF4u;
    ctx->pc = 0x17FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDF4u;
    // 0x17fdf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17FDFCu;
    // 0x17fdfc: 0x0  nop
    ctx->pc = 0x17fdfcu;
    // NOP
    ctx->pc = 0x17fe00u;
}
