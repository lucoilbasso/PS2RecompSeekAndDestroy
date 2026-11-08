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

// Function: entry_001705d8
// Address: 0x1705d8 - 0x170638
void entry_001705d8_0x1705d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001705d8_0x1705d8");
#endif

    ctx->pc = 0x1705d8u;

    // 0x1705d8: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
    // 0x1705dc: 0x3c120023  lui         $s2, 0x23
    ctx->pc = 0x1705dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
    // 0x1705e0: 0x3c190023  lui         $t9, 0x23
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)35 << 16));
    // 0x1705e4: 0x3c180042  lui         $t8, 0x42
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)66 << 16));
    // 0x1705e8: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x1705e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
    // 0x1705ec: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1705ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x1705f0: 0x3c0f0023  lui         $t7, 0x23
    ctx->pc = 0x1705f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)35 << 16));
    // 0x1705f4: 0x3c0e007a  lui         $t6, 0x7A
    ctx->pc = 0x1705f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)122 << 16));
    // 0x1705f8: 0x3c0d0004  lui         $t5, 0x4
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4 << 16));
    // 0x1705fc: 0x3c0c0006  lui         $t4, 0x6
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)6 << 16));
    // 0x170600: 0x36732840  ori         $s3, $s3, 0x2840
    ctx->pc = 0x170600u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)10304);
    // 0x170604: 0x36522e00  ori         $s2, $s2, 0x2E00
    ctx->pc = 0x170604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)11776);
    // 0x170608: 0x373929c0  ori         $t9, $t9, 0x29C0
    ctx->pc = 0x170608u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)10688);
    // 0x17060c: 0x37188200  ori         $t8, $t8, 0x8200
    ctx->pc = 0x17060cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)33280);
    // 0x170610: 0x36312b40  ori         $s1, $s1, 0x2B40
    ctx->pc = 0x170610u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)11072);
    // 0x170614: 0x3610d600  ori         $s0, $s0, 0xD600
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54784);
    // 0x170618: 0x35ef2cc0  ori         $t7, $t7, 0x2CC0
    ctx->pc = 0x170618u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)11456);
    // 0x17061c: 0x35ce9280  ori         $t6, $t6, 0x9280
    ctx->pc = 0x17061cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)37504);
    // 0x170620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17062c: 0x35adf280  ori         $t5, $t5, 0xF280
    ctx->pc = 0x17062cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)62080);
    // 0x170630: 0x358c4400  ori         $t4, $t4, 0x4400
    ctx->pc = 0x170630u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)17408);
    // 0x170634: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x170634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x170638u;
}
