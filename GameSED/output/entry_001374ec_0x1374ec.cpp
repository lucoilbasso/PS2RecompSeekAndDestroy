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

// Function: entry_001374ec
// Address: 0x1374ec - 0x137528
void entry_001374ec_0x1374ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001374ec_0x1374ec");
#endif

    ctx->pc = 0x1374ecu;

    // 0x1374ec: 0xafd40400  sw          $s4, 0x400($fp)
    ctx->pc = 0x1374ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 20));
    // 0x1374f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1374f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1374f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1374f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1374f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1374fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1374fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137500: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x137500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137504: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x137504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137508: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x137508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13750c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13750cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137510: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x137510u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x137514: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x137514u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137518: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x137518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13751c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x13751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137520: 0x3e00008  jr          $ra
    ctx->pc = 0x137520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137520u;
        // 0x137524: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137528u;
}
