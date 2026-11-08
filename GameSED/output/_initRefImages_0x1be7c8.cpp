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

// Function: _initRefImages
// Address: 0x1be7c8 - 0x1be8a8
void _initRefImages_0x1be7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_initRefImages_0x1be7c8");
#endif

    ctx->pc = 0x1be7c8u;

    // 0x1be7c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1be7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1be7cc: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x1be7ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
    // 0x1be7d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1be7d4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1be7d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1be7d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1be7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be7e0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1be7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1be7e4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1be7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be7e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1be7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1be7ec: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x1be7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1be7f0: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x1be7f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be7f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1be7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1be7f8: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x1be7f8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1be7fc: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x1be7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x1be800: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x1be800u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1be804: 0x18e8824  and         $s1, $t4, $t6
    ctx->pc = 0x1be804u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x1be808: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x1be808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1be80c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1be80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1be810: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1be810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1be814: 0x8fad0060  lw          $t5, 0x60($sp)
    ctx->pc = 0x1be814u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be818: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1be818u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x1be81c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1be81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1be820: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be824: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1be824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x1be828: 0x1ae7824  and         $t7, $t5, $t6
    ctx->pc = 0x1be828u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x1be82c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1be82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x1be830: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x1be830u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1be834: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x1be834u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x1be838: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1be838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1be83c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x1be83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1be840: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x1be840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x1be844: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x1be844u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x1be848: 0x1936025  or          $t4, $t4, $s3
    ctx->pc = 0x1be848u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 19));
    // 0x1be84c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1be84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be854: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x1be854u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1be858: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1be858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1be85c: 0x28e1824  and         $v1, $s4, $t6
    ctx->pc = 0x1be85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 14));
    // 0x1be860: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x1be860u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x1be864: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1be864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1be868: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1be868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1be86c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1be86cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1be870: 0x1b36825  or          $t5, $t5, $s3
    ctx->pc = 0x1be870u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 19));
    // 0x1be874: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1be874u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1be878: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1be878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1be87c: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x1be87cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x1be880: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1be880u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1be884: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x1be884u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x1be888: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1be888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be88c: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x1be88cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x1be890: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1be890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be894: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1be894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be898: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1be898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be89c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1be89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1be8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8A0u;
        // 0x1be8a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE8A8u;
}
