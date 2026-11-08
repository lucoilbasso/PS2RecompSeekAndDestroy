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

// Function: entry_001b79d0
// Address: 0x1b79d0 - 0x1b7a38
void entry_001b79d0_0x1b79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b79d0_0x1b79d0");
#endif

    ctx->pc = 0x1b79d0u;

    // 0x1b79d0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b79d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1b79d4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b79d8: 0x24a5bf80  addiu       $a1, $a1, -0x4080
    ctx->pc = 0x1b79d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
    // 0x1b79dc: 0x2666bf00  addiu       $a2, $s3, -0x4100
    ctx->pc = 0x1b79dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950656));
    // 0x1b79e0: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x1b79e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x1b79e4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1b79e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b79e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b79e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b79ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b79ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b79f0: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1b79f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1b79f4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b79f8: 0x2642bfd8  addiu       $v0, $s2, -0x4028
    ctx->pc = 0x1b79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950872));
    // 0x1b79fc: 0xad43b9bc  sw          $v1, -0x4644($t2)
    ctx->pc = 0x1b79fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294949308), GPR_U32(ctx, 3));
    // 0x1b7a00: 0x2528c000  addiu       $t0, $t1, -0x4000
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950912));
    // 0x1b7a04: 0xae46bfd8  sw          $a2, -0x4028($s2)
    ctx->pc = 0x1b7a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x40BFD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFD8u, _value); } while (0);
    // 0x1b7a08: 0x2484c100  addiu       $a0, $a0, -0x3F00
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    // 0x1b7a0c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b7a10: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1b7a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x40BFF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFF4u, _value); } while (0);
    // 0x1b7a14: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1b7a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x40BFDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFDCu, _value); } while (0);
    // 0x1b7a18: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1b7a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a1c: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1b7a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x40BFE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFE8u, _value); } while (0);
    // 0x1b7a20: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b7a20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b7a24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b7a24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40BFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFE0u, _value); } while (0);
    // 0x1b7a28: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1b7a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b7a2c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1b7a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x40BFE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFE4u, _value); } while (0);
    // 0x1b7a30: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1b7a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40BFECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFECu, _value); } while (0);
    // 0x1b7a34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1b7a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40BFF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BFF0u, _value); } while (0);
    ctx->pc = 0x1b7a38u;
}
