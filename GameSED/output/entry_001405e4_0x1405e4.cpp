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

// Function: entry_001405e4
// Address: 0x1405e4 - 0x140630
void entry_001405e4_0x1405e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405e4_0x1405e4");
#endif

    ctx->pc = 0x1405e4u;

    // 0x1405e4: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1405e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1405e8: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1405ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1405ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1405f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1405f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1405f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1405f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1405f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1405f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1405fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1405fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x140600: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x140600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x140604: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x140604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140608: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x140608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14060c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x14060cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x140610: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x140610u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140614: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x140614u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x140618: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x140618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14061c: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x14061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x140620: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x140620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x140624: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x140624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x140628: 0x3e00008  jr          $ra
    ctx->pc = 0x140628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140628u;
        // 0x14062c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140630u;
}
