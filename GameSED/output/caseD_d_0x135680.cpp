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

// Function: caseD_d
// Address: 0x135680 - 0x1356b8
void caseD_d_0x135680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x135680");
#endif

    ctx->pc = 0x135680u;

    // 0x135680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13568c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13568cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135690: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135698: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13569c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13569cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1356a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1356a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1356a4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1356a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1356a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1356a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1356ac: 0x80509b6  j           func_1426D8
    ctx->pc = 0x1356ACu;
    ctx->pc = 0x1356B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356ACu;
    // 0x1356b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1426D8u;
    ApCMTraceLowAngleLimit__FP7WcActor_0x1426d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1356B4u;
    // 0x1356b4: 0x0  nop
    ctx->pc = 0x1356b4u;
    // NOP
    ctx->pc = 0x1356b8u;
}
