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

// Function: entry_00163db0
// Address: 0x163db0 - 0x163de8
void entry_00163db0_0x163db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163db0_0x163db0");
#endif

    ctx->pc = 0x163db0u;

    // 0x163db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163db4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x163db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163db8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x163db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163dbc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x163dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x163dc0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x163dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x163dc4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x163dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x163dc8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x163dc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x163dcc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x163dccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163dd0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x163dd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x163dd4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x163dd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163dd8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x163dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x163ddc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x163ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163de0: 0x3e00008  jr          $ra
    ctx->pc = 0x163DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE0u;
        // 0x163de4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163DE8u;
}
